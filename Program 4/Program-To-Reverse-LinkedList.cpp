#include <iostream.h>
#include <conio.h>

struct Node {
    int data;
    Node* next;
};

Node* reverseLinkedList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* nextNode = NULL;
    
    while (current != NULL) {
        nextNode = current->next;  // Store the next node
        current->next = prev;      // Change the next of current node
        
        // Move pointers one position ahead
        prev = current;
        current = nextNode;
    }
    
    return prev;  // The new head after reversing
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
    
    cout << "Original Linked List: ";
    display(head);
    
    head = reverseLinkedList(head);
    
    cout << "Reversed Linked List: ";
    display(head);
    
    getch();
    return 0;
}
