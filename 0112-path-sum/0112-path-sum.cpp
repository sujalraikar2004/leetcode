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
void check(TreeNode* root, int targetSum,int &sum,bool &exist){
    if(root==nullptr)return ;
    sum+=root->val;
    if(root->left==nullptr && root->right==nullptr && sum==targetSum){
        exist=true;
        return;
    }
   

   
    check(root->left,targetSum,sum,exist);
    check(root->right,targetSum,sum,exist);
    sum-=root->val;
}

    bool hasPathSum(TreeNode* root, int targetSum) {
       int sum=0;
       bool exist=false;
       check(root,targetSum,sum,exist);
       if(exist){
        return true;
       }
       return false;

    }
};