#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* link;
} *head;

void insertion(int target) {
    struct node* pnew = new node();
    pnew->data = target;
    pnew->link = NULL;

    if (head == NULL) {
        head = pnew;
    } else {
        struct node* ploc = head;
        while (ploc->link != NULL) {
            ploc = ploc->link;
        }
        ploc->link = pnew;
    }
}

void reverse() {
    struct node* current = head;
    struct node* prev = NULL;
    struct node* next = NULL;
    while (current != NULL) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void display(struct node* ploc) {
    while (ploc != NULL) {
        cout << ploc->data << " ";
        ploc = ploc->link;
    }
    cout << endl;
}
void add(){
	struct node* ploc=head;
	struct node* tmp;
	int sum=0,carry=1;
	while(ploc!=NULL){
		sum=carry+ploc->data;
		carry=(sum>=10)?1:0;
		sum=sum%10;
		ploc->data=sum;
		tmp=ploc;
		ploc=ploc->link;
	}
	if(carry>0){
		struct node* pnew=new node;
		pnew->data=carry;
		pnew->link=NULL;
		tmp->link=pnew;
	}
}
void addone(){
	reverse();
	add();
	reverse();
}
int main() {
    int value;
    head = NULL;
    cout << "Enter the elements in the linked list (enter -1 to end):\n";
    while (cin >> value && value != -1) {
        insertion(value);
    }
    cout << "\nOriginal linked list:\n";
    display(head);
    addone();
    cout << "\nAfter adding one linked list:\n";
    display(head);
    return 0;
}

