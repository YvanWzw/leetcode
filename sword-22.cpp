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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* temp1=head;
        ListNode* temp2 = head;
        for(int i=0;i<k-1;i++)
            temp2=temp2->next;
        while(temp2->next!=nullptr)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
};