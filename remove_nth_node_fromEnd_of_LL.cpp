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
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode *s=dummy,*f=dummy;
        ListNode *curr=head;
        for(int i=1;i<=n;i++) f=f->next;
        while(f->next)
        {
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return dummy->next;
    }
};
