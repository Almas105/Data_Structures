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
int getmiddle(){
	vector<int> a;
	while(head!=NULL){
		a.push_back(head->data);
		head=head->link;
	}
	int mid=a.size()/2;
	return a[mid];
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
	cout<<"\nMiddle:"<<getmiddle()<<endl;
}
