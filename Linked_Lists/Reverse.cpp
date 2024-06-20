#include <iostream>
#include <vector>
using namespace std;

struct node{
	int data;
	struct node* link;
}*head;

void insertion(int datain){
	struct node* pnew=new node;
	pnew->data=datain;
	pnew->link=head;
	head=pnew;
}
void reverse(){
	struct node* prev=NULL, *next =NULL;
	struct node* current =head;
	while(current!=NULL){
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
void display(){
	struct node* ploc;
	while(ploc!=NULL){
		cout<<ploc->data<<"--";
		ploc=ploc->link;
	}
}
int main(){
	head=NULL;
	int n,value;
	cout<<"\nEnter the size of linked list:";
	cin>>n;
	cout<<"\nEnter the elements:";
	for(int i=0;i<n;i++){
		cin>>value;
		insertion(value);
	}
	reverse();
	display();
}
