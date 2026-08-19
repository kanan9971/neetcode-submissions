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
    int height(TreeNode* node){
        if( node == nullptr){
            return 0;
        }

        return 1 + max(height(node->left),height(node->right));
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }

        if (root == nullptr) return true;

        bool thisNodeOK = abs(height(root->left) - height(root->right)) <= 1;
        bool leftOK     = isBalanced(root->left);
        bool rightOK    = isBalanced(root->right);

        return thisNodeOK && leftOK && rightOK;

    }
};
