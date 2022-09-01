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
    int good(TreeNode* root,int ma){
         if(!root)
            return 0;
        int res=root->val>=ma?1:0;
        res+=good(root->left,max(ma,root->val));
        res+=good(root->right,max(ma,root->val));
        return res;
    }
    
    int goodNodes(TreeNode* root) {
        int ma=INT_MIN;
        return good(root,ma);
    }
};