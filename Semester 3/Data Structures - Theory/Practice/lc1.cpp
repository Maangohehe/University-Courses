#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *increasingBST(TreeNode *root, TreeNode *prev = nullptr)
    {
        if (root == nullptr)
            return nullptr; // base case
        if (root->left)
        {
            //If root's left exist do this
            TreeNode* NewNode = increasingBST(root->left, root);
            TreeNode* dummy = root;
            dummy->right = prev;
            dummy->left = nullptr;
            return dummy;
        }
    }
};

int main()
{
    Solution s1;
    TreeNode *root = new TreeNode();
    root->val = 10;
    root->left = new TreeNode();
    root->left->val = 5;
    root->left->left = nullptr;
    root->right = new TreeNode();
    root->right->val = 15;
    root->right->right = nullptr;
    root = s1.increasingBST(root, nullptr);

    /*
    [10,5,15,3,7,null,18]
    7
    15
*/
}