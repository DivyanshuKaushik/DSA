/** 
Detect/Remove cycle in linked list 

Cycle means two nodes point at a same node

******* Solution *******

Floyd's algorithm or Hare and Tortoise algorithm

use two pointer one fast and another slow 

*/
#include<bits/stdc++.h>

// use functions linkedlist.cpp 
#include "linkedlist.cpp"

using namespace std;

// detecting cycle 
bool detectCycle(node* &head){
    node* fast = head;
    node* slow = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

// make cycle at a position 
void makeCycle(node* head,int pos){
    node* temp = head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos)
            startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

// removing cycle 
void removeCycle(node* &head){
    node* fast = head;
    node* slow = head;
    do{
        slow = slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next = NULL;
}


int main(){
    node* head = NULL;
    int values[] = {10,20,30,40,50};
    for(auto i:values){
        insertAtTail(head,i);
    }
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}