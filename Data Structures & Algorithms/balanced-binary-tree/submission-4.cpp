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
    int height_tree(TreeNode* root){
        if (root == nullptr){
            return 0;
        }

        return 1+ max(height_tree(root->left),height_tree(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        
        int right = height_tree(root->right);
        int left = height_tree(root->left);
        
        
        bool current_node_balanced= abs(right - left) <= 1;

        return current_node_balanced && isBalanced(root->left) && isBalanced(root->right);
    }
};
