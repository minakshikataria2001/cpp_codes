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
void display(node* &root){
cout<<root->data<<"->";
cout<<root->left->data<<"->";
cout<<root->right->data<<"->";
cout<<endl;
}
int main(){
   struct node* root = new node(1);
   root->left = new node(2);
   root->right = new node(3);
   cout<<"tree after insertion of 3 nodes:"<<endl;
   display(root);
   root->right = NULL;
   cout<<"after deleting a node:"<<endl;
   display(root);
   
    
   



    return 0;
}