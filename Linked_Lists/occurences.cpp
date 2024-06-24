/*
Given a singly linked list and a key, count the number of occurrences of the given key in the linked list. For example, if the given linked list is 1->2->1->2->1->3->1 and the given key is 1, then the output should be 4.

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

int occurence(int target){
	struct node *ploc =head;
	int count=0;
	while(ploc!=NULL){
		if(ploc->data==target){
			count++;
		}
		ploc=ploc->link;
	}
	return count;
}
int main(){
	head=NULL;
	int value,i;
	cout<<"\nEnter the elements. Type -1 to stop: ";
	while(cin>>value && value!=-1){
		insertion(value);
	}
	cout<<"\nEnter the value: ";
	cin>>i;
	int ans=occurence(i);
	cout<<"The Occurence of key "<<i<<" :"<<ans;
}


