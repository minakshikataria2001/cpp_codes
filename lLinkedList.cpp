#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = n;
}
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
     head = n;
     n->next = temp;
        
}
void deleteFromTail(node* &head){
    node* temp = head;
    while(temp->next->next!=NULL){
         temp = temp->next;
    }
    temp->next = NULL;
}
void deleteFromHead(node* &head){
    node* todelete = head;
    
    head = head->next;

    delete todelete;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* head= NULL;
insertAtTail(head,23);
insertAtTail(head,78);
insertAtHead(head,56);
// deleteFromTail(head);
// deleteFromHead(head);
cout<<"list:"<<endl;
display(head);
    return 0;
}