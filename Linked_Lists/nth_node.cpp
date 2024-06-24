/*
Write a GetNth() function that takes a linked list and an integer index and returns the data value stored in the node at that index position. 

Example: 

Input:  1->10->30->14,  index = 2
Output: 30  
The node at index 2 is 30
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
	int count=0;
	while(ploc!=NULL){
		count++;
		if(count==index){
			return ploc->data;
		}
		ploc=ploc->link;
	}
	return -1;
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
	cout<<"The node at index "<<i<<" :"<<ans;
}


