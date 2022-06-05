#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

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

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

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

int main(){
    node* head = NULL;
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtHead(head,3);
    insertAtHead(head,1);
    display(head);
    cout<<search(head,3)<<endl;

    return 0;
}