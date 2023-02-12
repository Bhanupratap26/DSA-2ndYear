https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/896583611/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

 vector<int>ans;

    void porder(TreeNode* root)
    {
        if(root == NULL)
        {
            return ;
        }
        ans.push_back(root -> val);
        porder(root -> left);
        porder(root -> right);

      

    }
    vector<int> preorderTraversal(TreeNode* root) {
        porder(root);
        return ans;
        
    }
};
