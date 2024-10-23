class Solution {
public:

    int path(TreeNode*root,int&Max){
        if(!root)return -2000;
        int l=path(root->left,Max);
        int r=path(root->right,Max);
        int x=max(l+root->val,max(r+root->val,root->val));
        Max=max(l+r+root->val,max(x,max(max(l,r),Max)));
        return x;
    }
    
    int maxPathSum(TreeNode* root) {
        int Max=-2000;
         path(root,Max);
         return Max;
    
    }
};