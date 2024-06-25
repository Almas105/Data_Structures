/*

Write a function that moves the last node to the front in a given Singly Linked List.

Examples:

Input: 1->2->3->4->5
Output: 5->1->2->3->4

Input: 3->8->1->5->7->12
Output: 12->3->8->1->5->7  

*/
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

void change() {
    struct node *ppre=NULL;
    struct node *ploc=head;
    while(ploc->link!=NULL){
    	ppre=ploc;
    	ploc=ploc->link;
	}
	ppre->link=NULL;
	ploc->link=head;
	head=ploc;
}

void display(struct node* ploc) {
    while (ploc != NULL) {
        cout << ploc->data << " ";
        ploc = ploc->link;
    }
    cout << endl;
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
    change();
    cout << "\nChanged linked list:\n";
    display(head);
    return 0;
}

