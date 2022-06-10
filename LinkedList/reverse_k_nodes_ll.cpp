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

void insert_node_at_tail(node* &head,int data){
    node *newNode = new node(data);
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
        cout<<temp->data<<' ';
        temp = temp->next;
    }
    cout<<endl;
}

// node* reverse_k_nodes(node* &head,int k){

// return head;
// }



int main(){
    

    return 0;
}