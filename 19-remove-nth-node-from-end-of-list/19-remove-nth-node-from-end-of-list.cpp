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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start= new ListNode();   // creating a dummy node
        start->next=head;   
        ListNode *fast=start;
        ListNode *slow=start;
        
        // traverse the fast to last node
        
        for(int i=1;i<=n;i++)
        {
            fast=fast->next;
        }
        
        
        //traverse both fast and slow by step 1
        
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        
        // breaking the node which we want to delete
        slow->next=slow->next->next;
        return start->next;
    }
};