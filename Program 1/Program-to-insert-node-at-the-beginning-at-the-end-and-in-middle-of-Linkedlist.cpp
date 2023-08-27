#include <iostream.h>
#include <conio.h>

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

Node* insertAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);
    if (!head)
        return newNode;

    Node* current = head;
    while (current->next)
        current = current->next;
    current->next = newNode;
    return head;
}

Node* insertAtMiddle(Node* head, int data, int position) {
    if (position <= 0) {
        cout << "Invalid position!" << endl;
        return head;
    }

    Node* newNode = createNode(data);

    if (position == 1) {
        newNode->next = head;
        return newNode;
    }

    Node* current = head;
    for (int i = 1; i < position - 1 && current; i++)
        current = current->next;

    if (!current) {
        cout << "Invalid position!" << endl;
        return head;
    }

    newNode->next = current->next;
    current->next = newNode;
    return head;
}

void displayList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    clrscr();

    Node* head = NULL;
    head = insertAtBeginning(head, 1);
    head = insertAtEnd(head, 3);
    head = insertAtMiddle(head, 2, 2);

    cout << "Linked List: ";
    displayList(head);

    getch();
    return 0;
}
