#include <iostream>
#include<math.h>
using namespace std;


struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};


int p = 0;
int kthLargest(TreeNode* root, int k) {
	int temp = 0;
	if (root != nullptr)
	{
		temp = kthLargest(root->right, k);
		++p;
		if (p == k)
			return root->val;
		if (temp != -1 && temp != 0)
			return temp;
		temp = kthLargest(root->left, k);
	}
	if (temp != -1 && temp != 0)
		return temp;
	else
		return -1;
}


int main()
{
	TreeNode* root = new TreeNode(2);
	TreeNode* le = new TreeNode(1);
	TreeNode* leq = new TreeNode(3);
	TreeNode* leqe = new TreeNode(4);
	root->left = le;
	root->right = leq;
	leq->right = leqe;
	//cout << maxDepth(root);
	cout << kthLargest(root, 2);
	return 0;
}