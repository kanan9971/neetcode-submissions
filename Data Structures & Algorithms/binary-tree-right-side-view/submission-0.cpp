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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        queue<TreeNode*> Q;
        if(!root){return result;}
        Q.push(root);

        while(!Q.empty()){
            
            int size = Q.size();
            for(int i =0; i<size; i++){
                TreeNode* node = Q.front();
                if(i ==0){
                    result.push_back(node->val);
                }
                Q.pop();
                if(node->right){Q.push(node->right);}
                if(node->left){Q.push(node->left);}
            }

            
            
        }

        return result;

    }
};
