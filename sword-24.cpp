#include <iostream>
#include<math.h>
using namespace std;


struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};


  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

  ListNode* hh;
 
  void reverseL(ListNode* first, ListNode* second)
  {
      if (first != nullptr && second != nullptr)
      {
          if (second->next != nullptr)
          {
              reverseL(first->next, second->next);

          }
          else
              hh = second;
          second->next = first;
      }
  }

    ListNode* reverseList(ListNode* head) {
        
        if (head != nullptr&&head->next!=nullptr)
        {
            ListNode* first = head;
            ListNode* second = head->next;
            reverseL(first, second);
            first->next = nullptr;
            return hh;
        }
        return head;

    }



int main()
{
	//TreeNode* root = new TreeNode(2);
	//TreeNode* le = new TreeNode(1);
	//TreeNode* leq = new TreeNode(3);
	//TreeNode* leqe = new TreeNode(4);
	//root->left = le;
	//root->right = leq;
	//leq->right = leqe;
	//cout << maxDepth(root);
	//cout << kthLargest(root, 2);
    ListNode* head = new ListNode(1);
    ListNode* head2 = new ListNode(2);
    ListNode* head3 = new ListNode(3);
    ListNode* head4 = new ListNode(4);
    ListNode* head5 = new ListNode(5);
    head->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = nullptr;
    ListNode* nn = reverseList(head);
    cout << nn->val;

	return 0;
}