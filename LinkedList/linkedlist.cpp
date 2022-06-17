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
    // node* temp = head;
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout<<endl;
    if(head==NULL || head->next==NULL){
        cout<<head->data<<" "<<endl;
        return;
    }
    cout<<head->data<<" ";
    display(head->next);
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
int getNum(node* head){
    node* temp = head;
    int i=1;
    int num=0;
    while(temp!=NULL){
        num+=(temp->data * i);
        i*=10;
        temp = temp->next;
    }
    return num;
}

// reverse a linkedlist iterative
node* reverseIterative(node* &head){
    node* previousptr = NULL;
    node* currentptr=head;
    node* nextptr;
    while(currentptr!=NULL){
        nextptr=currentptr->next;
        currentptr->next=previousptr;

        previousptr=currentptr;
        currentptr=nextptr;
    }
    return previousptr;
}
// reverse a linkedlist recursive
node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newHead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}

// int main(){
//     node* head = NULL;
//     insertAtTail(head,2);
//     insertAtTail(head,4);
//     insertAtHead(head,3);
//     insertAtHead(head,1);
//     cout<<"After Insertion"<<endl;
//     display(head);
//     cout<<endl;
//     cout<<getNum(head)<<endl;
//     // cout<<"After Searching"<<endl;
//     // cout<<search(head,3)<<endl;
//     // deletion(head,3);
//     //  cout<<"After Deletion"<<endl;
//     // display(head);
//     // deleleAtHead(head);
//     // cout<<"After Deletion at head"<<endl;
//     // display(head);
//     // cout<<"After Reversal"<<endl;
//     // // node* reversed = reverseIterative(head);
//     // node* reversed = reverseRecursive(head);
//     // display(reversed);
//     return 0;
// }