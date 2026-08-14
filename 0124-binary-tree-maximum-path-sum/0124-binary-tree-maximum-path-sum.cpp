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
int f(TreeNode* root,int &maxi){
    if(root==nullptr){
        return 0;
    }
    int left=max(0,f(root->left,maxi));
    int right=max(0,f(root->right,maxi));
    int current=root->val+left+right;
    maxi=max(maxi,current);
    return root->val+max(left,right);
}
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int ans=f(root,maxi);
        return maxi;
    }
};