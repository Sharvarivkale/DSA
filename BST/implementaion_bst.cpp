#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Insert a node into BST
Node* insert(Node* root, int data) {

    // Empty tree
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }

    return root;
}

// Search in BST
bool search(Node* root, int key) {

    if (root == NULL) {
        return false;
    }

    if (root->data == key) {
        return true;
    }

    if (key < root->data) {
        return search(root->left, key);
    }
    else {
        return search(root->right, key);
    }
}

// Inorder Traversal
void inorder(Node* root) {

    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal
void preorder(Node* root) {

    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal
void postorder(Node* root) {

    if (root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Find minimum value
Node* minValueNode(Node* root) {

    Node* curr = root;

    while (curr->left != NULL) {
        curr = curr->left;
    }

    return curr;
}

// Delete a node
Node* deleteNode(Node* root, int key) {

    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    }
    else {

        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // Case 2: Only right child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // Case 3: Only left child
        if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 4: Two children
        Node* temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

int main() {

    Node* root = NULL;

    // Insert elements
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    // Search
    int key = 40;

    if (search(root, key)) {
        cout << "\n" << key << " is present";
    }
    else {
        cout << "\n" << key << " is not present";
    }

    // Delete
    root = deleteNode(root, 50);

    cout << "\nInorder after deletion: ";
    inorder(root);

    return 0;
}