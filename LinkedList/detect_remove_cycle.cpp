/** 
Detect/Remove cycle in linked list 

Cycle means two nodes point at a same node

******* Solution *******

Floyd's algorithm or Hare and Tortoise algorithm

use two pointer one fast and another slow 

*/
#include<bits/stdc++.h>

// use functions from doubly_linkedlist.cpp 
#include "linkedlist.cpp"

using namespace std;

// detecting cycle 
bool detectCycle(node* &head){
    node* fast = head;
    node* slow = head;
    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

int main(){
    node* head = NULL;
    insertAtHead(head,10);
    display(head);

    return 0;
}