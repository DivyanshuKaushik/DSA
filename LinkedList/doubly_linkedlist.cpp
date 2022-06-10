#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;
        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        int prev = temp->prev ? temp->prev->data : 0;
        cout<<"prev:"<<prev<<"value:"<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,int data){
    // create new node 
    Node* newNode = new Node(data);
    newNode->next = head;
    // head->prev = newNode;
    head=newNode;
}

void insertAtTail(Node* &head,int data){
    if(head==NULL){
        insertAtHead(head,data);
        return;
    }
    // create new node 
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
    // head = newNode;
}



int main(){

    Node* head = NULL;
    insertAtHead(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);

    display(head);
    return 0;
}