#include <iostream>
using namespace std;

struct node{
	int data;
	struct node* link;
}*head;

void deletion(struct node* ppre){
	if(head==NULL){
		return;
	}
	if(ppre==NULL){
		head=head->link;
	}
	else{
		ppre->link=ppre->link->link;
	}
}
void insertion(struct node* ppre,int datain)
{
	struct node* pnew=new node;
	pnew->data=datain;
	if(ppre==NULL){
		pnew->link=head;
		head=pnew;
	}
	else{
		pnew->link=ppre->link;
		ppre->link=pnew;
	}
}
struct node* search(int target){
	struct node* ploc,*ppre=NULL;
	ploc=head;
	if(head==NULL){
		return NULL;
	}
	while(ploc!=NULL && target>ploc->data){
		ppre=ploc;
		ploc=ploc->link;
	}
	return ppre;
}
struct node* locate(int target){
	struct node* ploc,*ppre=NULL;
	ploc=head;
	if(head==NULL){
		return NULL;
	}
	while(ploc!=NULL && target!=ploc->data){
		ppre=ploc;
		ploc=ploc->link;
	}
	return ppre;
}
void display(){
	struct node* ploc=head;
	while(ploc!=NULL){
		cout<<ploc->data<<" \t";
		ploc=ploc->link;
	}
}
int main()
{
	struct node* ppre=NULL;
	head=NULL;
	int data,choice;
	do{
		cout<<"\n1.Insertion\n2.Deletion\n3.Display\n"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
			cout<<"\nEnter the value of new node:";
			cin>>data;
			ppre=search(data);
			insertion(ppre,data);
			cout<<"\n Inserted Successfully"<<endl;
			break;
			
			case 2:
				cout<<"\nEnter the element to do delete:";
				cin>>data;
				ppre=locate(data);
				deletion(ppre);
				cout<<"\nDeleted Successfully";
				break;
			case 3:
				display();
				break;	
		}
	}while(choice!=4);
}
