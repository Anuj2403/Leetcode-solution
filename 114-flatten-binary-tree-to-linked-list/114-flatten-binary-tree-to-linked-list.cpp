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


// Recursive Approach
class Solution {
public:
    void flatten(TreeNode* root) {
        
      if (root == NULL || root->left == NULL &&
                        root->right == NULL) {
        return;
    }
 
    if (root->left != NULL) {
        flatten(root->left); //goes to left of the child

        TreeNode* tmpRight = root->right; //store value 4
        root->right = root->left;
        root->left = NULL;
        
        TreeNode* t = root->right;
        while (t->right != NULL) {
            t = t->right;
        }
        t->right = tmpRight;
    }
 
    flatten(root->right);
    }
};


//Pre-Order Approach

/*

if(root == NULL){
            return;
        }
        TreeNode *curr=root;
      //  TreeNode *prev=NULL;
        while(curr!=NULL)
        {
            if(curr->left!=NULL)
            {
                TreeNode* prev=curr->left;
                while(prev->right)
                {
                    prev=prev->right;
                }
                prev->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
                curr=curr->right;
        }
*/

