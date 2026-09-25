class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return dfs(root, nullptr , nullptr);
    }

    bool dfs(TreeNode* root , TreeNode*low , TreeNode* high){
        if(root == nullptr){
            return true;
        }

        if(low!=nullptr && root->val <= low->val){
            return false ;
        }
        if(high!= nullptr && root->val >= high->val){
            return false;
        }

        return dfs(root->left , low , root) && dfs(root->right, root , high);
    }
};