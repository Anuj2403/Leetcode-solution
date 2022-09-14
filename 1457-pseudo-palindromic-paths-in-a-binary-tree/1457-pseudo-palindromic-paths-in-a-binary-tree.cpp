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
    unordered_map<int,int> m;
    void dfs(TreeNode* root,int &ans){
        if(root==NULL) return;
        m[root->val]++;
        
        if(root->left==NULL and root->right==NULL){
            int cnt=0;
            for(int i=1;i<=9;i++){
                if(m[i]%2!=0)
                    cnt++;
            }
            if(cnt<=1)
              ans++;
           // return;
        }
        
       dfs(root->left,ans);
        dfs(root->right,ans);
        m[root->val]--;
        
            
    }
    int pseudoPalindromicPaths (TreeNode* root) {
       // m[root->val]=1;
        int ans=0;
        dfs(root,ans);
        return ans;
    }
};