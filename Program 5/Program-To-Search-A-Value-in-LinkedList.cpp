#include <iostream.h>
#include <conio.h>

struct Node {
    int data;
    Node* next;
};

bool searchValue(Node* head, int value) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return true;  // Value found
        }
        current = current->next;
    }
    return false;  // Value not found
}

int main() {
    clrscr();
    
    Node* head = NULL;
    head = new Node;
    head->data = 1;
    
    Node* second = new Node;
    second->data = 2;
    
    Node* third = new Node;
    third->data = 3;
    
    head->next = second;
    second->next = third;
    third->next = NULL;
    
    int searchValue = 2;
    if (searchValue(head, searchValue)) {
        cout << "Value " << searchValue << " found in the linked list." << endl;
    } else {
        cout << "Value " << searchValue << " not found in the linked list." << endl;
    }
    
    getch();
    return 0;
}
