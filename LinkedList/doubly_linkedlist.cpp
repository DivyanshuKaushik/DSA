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
        cout<<"prev:"<<prev<<"\t"<<"data:"<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,int data){
    // create new node 
    Node* newNode = new Node(data);
    // head->prev = newNode;
    newNode->next = head;
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

void insertAtPosition(Node* &head,int position,int data){
    if(position==0){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    Node* newNode = new Node(data);
    int i=1;
    while(i<position){
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleleAtHead(Node* &head){
    Node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void delelteByValue(Node* &head,int value){
    
}

void delelteByPosition(Node* &head,int pos){
    if(pos==0){
        deleleAtHead(head);
        return;
    }
    Node* temp = head;
    int i=1;
    while(i<pos){
        temp = temp->next;
        i++;
    }
    Node* todelete = temp->next;
    temp->next->next->prev = temp;
    temp->next = todelete->next;
    delete todelete;
}


// int main(){

//     Node* head = NULL;
//     insertAtHead(head,10);
//     insertAtTail(head,20);
//     insertAtTail(head,30);
//     insertAtPosition(head,1,40);
//     delelteByPosition(head,0);

//     display(head);
//     return 0;
// }