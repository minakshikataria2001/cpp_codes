#include<iostream>
using namespace std;
struct node{
     int data;
     struct node* left;
     struct node* right;
     node(int val){
        data = val;
        left= NULL;
        right = NULL;
     }
     
     
}; 
void preOrder( struct node* &root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<"->";
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(  struct node* &root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<"->";
    inOrder(root->right);
}
void postOrder( struct node* &root){
      if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"->";
}


int main(){
   struct node* root = new node(1);
   root->left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right = new node(7);
   cout<<"preorder:"<<endl;
   preOrder(root);
   cout<<endl; 
   cout<<"inorder:"<<endl;
   inOrder(root);
   cout<<endl; 
   cout<<"postorder:"<<endl;
   postOrder(root);
   cout<<endl; 
   



    return 0;
}