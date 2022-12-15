class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* curr=head;
        ListNode* temp;
        ListNode* prev=NULL;
        while(curr)
        {
            temp=curr;
            curr=curr->next;
            temp->next = prev;
            prev=temp;
        }

        return prev;
    }
};
