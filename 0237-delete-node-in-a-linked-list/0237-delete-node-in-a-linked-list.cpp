/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // ListNode *nextnode,*temp;
        // int pos,i=1;
        // while(i<pos-1)
        // {
        //     temp=temp->next;
        //     i++;
        // }
        // nextnode=temp->val;
        // temp->next=nextnode->next;
        // delete nextnode;
            ListNode *next=node->next;
            node->val=next->val;
            node->next=next->next;
            delete next;
        
    }
};