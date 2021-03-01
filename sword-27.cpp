#include <iostream>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    
};

TreeNode* mirrorTree(TreeNode* root) {
    TreeNode* temp = nullptr;
    if (root != nullptr)
    {
        if (root->left != nullptr)
            temp = root->left;
        if (root->right != nullptr)
            root->left = root->right;
        else
            root->left = nullptr;
        if (temp != nullptr)
            root->right = temp;
        else
            root->right = nullptr;
        if (root->left != nullptr)
            mirrorTree(root->left);
        if (root->right != nullptr)
            mirrorTree(root->right);
    }

    return root;
}

int main()
{
    TreeNode* root=new TreeNode(1);
    TreeNode* le=new TreeNode(2);
    root->left = le;
    mirrorTree(root);
	return 0;
}