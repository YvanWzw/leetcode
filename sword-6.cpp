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
    vector<int> reversePrint(ListNode* head) {
        vector<int> vec;
        if(head==nullptr)
            return vec;
        vec.insert(vec.begin(), head->val);
        while(head->next!=nullptr){
            head=head->next;
            vec.insert(vec.begin(), head->val);
        }
        return vec;
    }
};