#include<bits/stdc++.h>

using namespace std;

// node creation 
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

// insertion 
void insertAtHead(node* &head,int data){
    node* n = new node(data);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head,int data){
    node *newNode = new node(data);
    // if ll is empty 
    if(head == NULL){
        head = newNode;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

// traversal 
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// searching 
bool search(node* head,int key){
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// deletion 
void deleleAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head,int val){
    // if linkedlist in empty 
    if(head==NULL){
        return;
    }
    // if linked has only one element 
    if(head->next==NULL){
        deleleAtHead(head);
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;
}

int main(){
    node* head = NULL;
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtHead(head,3);
    insertAtHead(head,1);
    cout<<"After Insertion"<<endl;
    display(head);
     cout<<"After Searching"<<endl;
    cout<<search(head,3)<<endl;
    deletion(head,3);
     cout<<"After Deletion"<<endl;
    display(head);
    deleleAtHead(head);
    cout<<"After Deletion at head"<<endl;
    display(head);
    return 0;
}