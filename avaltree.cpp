#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
    int height;
};

Node* createNode(int value) {
    Node* node = new Node();
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    node->height = 1;
    return node;
}

int getHeight(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    return node->height;
}

int getBalance(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    return getHeight(node->left) - getHeight(node->right);
}

Node* rotateRight(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node* rotateLeft(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }

    if (value < root->value) {
        root->left = insert(root->left, value);
    } else if (value > root->value) {
        root->right = insert(root->right, value);
    } else {
        return root;
    }

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int balance = getBalance(root);

    if (balance > 1 && value < root->left->value) {
        return rotateRight(root);
    }

    if (balance < -1 && value > root->right->value) {
        return rotateLeft(root);
    }

    if (balance > 1 && value > root->left->value) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }

    if (balance < -1 && value < root->right->value) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
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
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    cout<<"inorder:";
    inorderTraversal(root);

    

    return 0;
}
