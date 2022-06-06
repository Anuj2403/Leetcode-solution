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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      if(headA==NULL|| headB==NULL)
      {
          return NULL;
      }
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b)
        {
            a=a==NULL?headA:a->next;
            b=b==NULL?headB:b->next;
        }
        return a;
        
    }
};


// By using stack in hash table

/*

  stack<int> s1,s2;
        ListNode *p1=headA;
        ListNode *p2=headB;
        p1->next=headA;
        p2->next=headB;
        while(p1->next!=NULL)
        {
            s1.push(p1->val);
        }
        while(p2->next!=NULL)
        {
            s2.push(p2->val);
        }
        ListNode* ans;
        while(!s1.empty()&&!s2.empty())
        {
            int a=s1.top();
            int b=s2.top();
            if(a==b){
                ans=a;
                s1.pop();
                s2.pop();
            }
            else
                return ans;
        }
        
*/