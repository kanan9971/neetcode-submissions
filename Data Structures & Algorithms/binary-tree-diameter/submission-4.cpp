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
    int max_height( TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        return 1+max(max_height(root->left),max_height(root->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root ==nullptr){
            return 0;
        }

        int left_height = max_height(root->left);
        int right_height = max_height(root->right);
        int throughout = left_height + right_height;
        int right = diameterOfBinaryTree(root->left);
        int left = diameterOfBinaryTree(root->right);
        return max(throughout,max(left,right));
        
    }


};
