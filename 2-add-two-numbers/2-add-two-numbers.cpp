/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* x, ListNode* y) {
        int sum=0,carry=0;
        ListNode *head = new ListNode();
        ListNode* temp = head;
        ListNode* l1 = x;
        ListNode* l2 = y;
        while(l1!=NULL || l2!=NULL || carry){
            int n1 = l1!=NULL ? l1->val :0;
             int n2 = l2!=NULL ? l2->val :0;
            sum+= n1 + n2 + carry;
            ListNode *newNode = new ListNode(sum%10);
            carry= sum/10;
            sum=0;
            temp->next = newNode;
            temp = temp->next;
            l1= l1!=NULL ? l1->next :NULL ;
             l2= l2!=NULL ? l2->next :NULL ;
        }
        return head->next;
    }
};