#include <iostream>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    
};

int getDepth(TreeNode* root, int depth)
{
    int a = -1, b = -1;
    if (root != nullptr)
    {
        depth++;
        a = getDepth(root->left, depth);
        b = getDepth(root->right, depth);
    }
    int maxNum = a > b ? a : b;
    return depth > maxNum ? depth : maxNum;
}

int maxDepth(TreeNode* root) {
    return getDepth(root, 0);
}


int main()
{
    TreeNode* root=new TreeNode(1);
    TreeNode* le=new TreeNode(2);
    TreeNode* leq = new TreeNode(2);
    root->left = le;
    root->right = leq;
    cout << maxDepth(root);
	return 0;
}