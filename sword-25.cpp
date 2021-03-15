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
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode* head = new ListNode(0);
	ListNode* current = head;
	if (l1 == nullptr)
		return l2;
	if (l2 == nullptr)
		return l1;
	while (true)
	{
		if (l1->val < l2->val)
		{
			ListNode* newNode = new ListNode(l1->val);
			current->next = newNode;
			current = current->next;
			if (l1->next != nullptr)
				l1 = l1->next;
			else
			{
				while (l2)
				{
					ListNode* newNode = new ListNode(l2->val);
					current->next = newNode;
					current = current->next;
					l2 = l2->next;
				}
				break;
			}
		}
		else if (l1->val == l2->val)
		{
			ListNode* newNode = new ListNode(l1->val);
			current->next = newNode;
			current = current->next;
			if (l1->next != nullptr)
				l1 = l1->next;
			else
			{
				while (l2)
				{
					ListNode* newNode = new ListNode(l2->val);
					current->next = newNode;
					current = current->next;
					l2 = l2->next;
				}
				break;
			}
			newNode = new ListNode(l2->val);
			current->next = newNode;
			current = current->next;
			if (l2->next != nullptr)
				l2 = l2->next;
			else
			{
				while (l1)
				{
					ListNode* newNode = new ListNode(l1->val);
					current->next = newNode;
					current = current->next;
					l1 = l1->next;
				}
				break;
			}
		}
		else if (l1->val > l2->val)
		{
			ListNode* newNode = new ListNode(l2->val);
			current->next = newNode;
			current = current->next;
			if (l2->next != nullptr)
				l2 = l2->next;
			else
			{
				while (l1)
				{
					ListNode* newNode = new ListNode(l1->val);
					current->next = newNode;
					current = current->next;
					l1 = l1->next;
				}
				break;
			}
		}

		
	}
	return head->next;
}

};