/*
Find the length of the linked list
*/

#include <iostream>
using namespace std;

struct node{
	int data;
	struct node* link;
}* head;

void insertion(int target){
	struct node* pnew= new node();
	pnew->data=target;
	pnew->link=head;
	head=pnew;
}

int getlen(){
	struct node* ploc= head;
	int count=0;
	while(ploc!=NULL){
		count++;
		ploc=ploc->link;
	}
	return count;
}

int main(){
	int n,value;
	cout<<"\nEnter the element in the linked list type & to end the list:";
	while(cin>>value && value!='&'){
		insertion(value);
	}
	int len=getlen();
	cout<<"\nThe length of linked list is: "<<len;
}
