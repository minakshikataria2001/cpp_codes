#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
        
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
    temp->next=n;

}
void insertAtHead(node* &head,int val){
    node* n = new node(val);

    node* temp = head;
    n->next =  temp;
    head = n;
}
void deleteFromTail(node* &head){
    node* temp = head;
    while(temp->next->next!=NULL){
         temp = temp->next;
    }
    temp->next = NULL;
}
void deleteFromMid(node* &head,int val){
    node* temp = head;
    while(temp->next->data!=val){
         temp = temp->next;
    }
    temp->next = temp->next->next;
}
void deleteFromHead(node* &head){

    node* todelete = head;
    
    head = head->next;

    delete todelete;
    
}
bool search(node* &head,int toFound){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==toFound){
            
            return true;
        }
        
        
        temp= temp->next;
    }
    return false;
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
cout<<"list:"<<endl;
display(head);

insertAtHead(head,34);
cout<<endl<<"after inserting node at head:"<<endl;
display(head);
int find ;
cout<<endl<<"enter element to search in list:"<<endl;
cin>>find;
if(search(head,find)){
cout<<endl<<"present in the list"<<endl;
}
else{
    cout<<endl<<"not present in list"<<endl;
}
insertAtTail(head,56);
insertAtTail(head,87);
insertAtTail(head,67);
cout<<endl<<"after inserting more elements in list:"<<endl;
display(head);

deleteFromTail(head);
deleteFromHead(head);
cout<<endl<<"after deleting element from head and tail:"<<endl;
display(head);
int remove;
cout<<endl<<"enter a data you want to remove:"<<endl;
cin>>remove;cout<<endl;
cout<<endl<<"after removing"<<endl;
deleteFromMid(head,remove);
display(head);
return 0;    
}