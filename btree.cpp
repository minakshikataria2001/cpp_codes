#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* node = new Node();
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void insert(Node*& root, int value) {
    if (root == nullptr) {
        root = createNode(value);
        return;
    }

    if (value < root->value) {
        insert(root->left, value);
    } else if (value > root->value) {
        insert(root->right, value);
    }
}

void deleteTree(Node*& root) {
    if (root == nullptr) {
        return;
    }

    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
    root = nullptr;
}

void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left); 
    cout << root->value << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;
    insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 7);
    insert(root, 13);
    insert(root, 17);
  cout<<"inorder:";
    inorderTraversal(root);

    deleteTree(root);

    return 0;
}
