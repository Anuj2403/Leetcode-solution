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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;              // map<p.first ,p.second>
        queue<pair<TreeNode *,pair<int,int>>>todo;         // (node,vertical,level)
        todo.push({root,{0,0}});
        
        while(!todo.empty())
        {
            auto p=todo.front();
            todo.pop();
            TreeNode *node=p.first;       //node
            int x=p.second.first;         //vertical
            int y=p.second.second;        //level
            nodes[x][y].insert(node->val);    //(1,0,0) pushed
            
            if(node->left)
                todo.push({node->left,{x-1,y+1}});   //(2,-1,1) -->goes left
            
            if(node->right)
                todo.push({node->right,{x+1,y+1}});  //(3,1,1)-->right
        }
        vector<vector<int>>ans;                              // store answer
        for(auto p:nodes)
        {
            vector<int>col;
            for(auto q:p.second)
            {
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
        
    }
};