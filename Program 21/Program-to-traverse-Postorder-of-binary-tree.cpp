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

// Function to perform postorder traversal
void postorderTraversal(Node* root) {
    if (root == NULL)
        return;

    // Traverse the left subtree
    postorderTraversal(root->left);

    // Traverse the right subtree
    postorderTraversal(root->right);

    // Visit the current node
    cout << root->data << " ";
}

int main() {
    clrscr(); // Clear the screen

    // Create a sample binary tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Perform postorder traversal
    cout << "Postorder traversal: ";
    postorderTraversal(root);

    getch(); // Wait for a key press before exiting
    return 0;
}
