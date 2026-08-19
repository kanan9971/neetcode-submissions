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
    int height(TreeNode* node) {
        if (node == nullptr) return 0;
        return 1 + max(height(node->left), height(node->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
    int throughMe = height(root->left) + height(root->right);
    int leftBest = diameterOfBinaryTree(root->left);
    int rightBest = diameterOfBinaryTree(root->right);
    return max(throughMe, max(leftBest, rightBest));
    
    
    }
        

};
