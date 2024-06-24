#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* link;
};

struct node *head1 = NULL, *head2 = NULL;

void insertion(struct node* &head, int num) {
    struct node* pnew = new node();
    pnew->data = num;
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

bool identical() {
    struct node* a = head1;
    struct node* b = head2;
    
    while (a != NULL && b != NULL) {
        if (a->data != b->data) {
            return false;
        }
        a = a->link;
        b = b->link;
    }
    
    return (a == NULL && b == NULL);
}

int main() {
    int value1, value2;
    
    cout << "Enter the elements in the first linked list. Type -1 to stop: ";
    while (cin >> value1 && value1 != -1) {
        insertion(head1, value1);
    }
    
    cout << "Enter the elements in the second linked list. Type -1 to stop: ";
    while (cin >> value2 && value2 != -1) {
        insertion(head2, value2);
    }
    
    if (identical()) {
        cout << "\nBoth linked lists are Identical.\n";
    } else {
        cout << "\nThe linked lists are Not Identical.\n";
    }
    
    return 0;
}

