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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;                             // store the list of level order of traversal
        
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);                                     // store the root first in queue ,ie-> 3
        while(!q.empty())                                 // go further the queue become empty
        {
            int size=q.size();                           //size is changed for {1} ,{2  3},  {4  5  6  7}
            vector<int>level;                            // store each level
            for(int i=0;i<size;i++)
            {
                // store queue front value in node of type TreeNode and after that pop it.
                TreeNode *node=q.front();   
                q.pop();
                
                // check if its left exist, push in queue
                if(node->left!=NULL)
                    q.push(node->left);
                
                //check if its right exist,push in queue
                if(node->right!=NULL)
                    q.push(node->right);
                
                //put in level vector
                level.push_back(node->val);
            }
            //put in data structure
            ans.push_back(level);
        }
        return ans;
        
    }
};