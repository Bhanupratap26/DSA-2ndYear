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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans ;
        stack<TreeNode *> S;
        TreeNode *curr = root;

        while(curr != NULL || S.empty() == 0) {
            while (curr != NULL) {
                S.push(curr);
                curr = curr -> right;
            }
            curr = S.top();
            ans.push_back(curr-> val);
            S.pop();
            curr = curr -> left;
        }

        return ans;

        
    }
};
