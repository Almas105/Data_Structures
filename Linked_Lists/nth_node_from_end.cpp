/*
Given a Linked List and a number N, write a function that returns the value at the Nth node from the end of the Linked List.
Input: 1 -> 2 -> 3 -> 4, N = 3
Output: 2

Input: 35 -> 15 -> 4 -> 20, N = 4
Output: 35   


*/

#include <iostream>
using namespace std;

struct node{
	int data;
	struct node* link;
} *head;
void insertion(int num){
	struct node *pnew=new node();
	pnew->data=num;
	pnew->link=NULL;
	if(head==NULL)
	{
		head=pnew;
	}
	else{
		struct node* ploc=head;
		while(ploc->link!=NULL)
		{
			ploc=ploc->link;
		}
		ploc->link=pnew;
	}
}

int index(int index){
	struct node *ploc =head;
	int count=0,length=0;
	while(ploc!=NULL){
		ploc=ploc->link;
		length++;
	}
	count=length-index;
	ploc=head;
	for(int i=0;i<count;i++){
		ploc=ploc->link;
	}
	return ploc->data;
}
int main(){
	head=NULL;
	int value,i;
	cout<<"\nEnter the elements. Type -1 to stop: ";
	while(cin>>value && value!=-1){
		insertion(value);
	}
	cout<<"\nEnter the index: ";
	cin>>i;
	int ans=index(i);
	cout<<"The node at index "<<i<<" from the end:"<<ans;
}


