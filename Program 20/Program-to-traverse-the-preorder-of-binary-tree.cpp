#include <iostream.h>
#include <conio.h>

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new Node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform preorder traversal
void preorderTraversal(Node* root) {
    if (root == NULL)
        return;

    // Visit the current node
    cout << root->data << " ";

    // Traverse the left subtree
    preorderTraversal(root->left);

    // Traverse the right subtree
    preorderTraversal(root->right);
}

int main() {
    clrscr(); // Clear the screen

    // Create a sample binary tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Perform preorder traversal
    cout << "Preorder traversal: ";
    preorderTraversal(root);

    getch(); // Wait for a key press before exiting
    return 0;
}
