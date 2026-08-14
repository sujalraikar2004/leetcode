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
void inorder(TreeNode* root,int &k,int &element){
    if(root==nullptr)return;
    
    inorder(root->left,k,element);
    k--;
    if(k==0){
        element=root->val;
        return ;
    }
    
    inorder(root->right,k,element);
}
    int kthSmallest(TreeNode* root, int k) {
        int element=0;
        inorder(root,k,element);
        return element;
    }
};