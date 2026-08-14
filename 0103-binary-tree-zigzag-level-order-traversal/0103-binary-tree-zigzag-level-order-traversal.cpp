class Solution {
public:

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if (root == nullptr)
            return {};

        vector<vector<int>> ans;

        queue<TreeNode*> q;
        q.push(root);

        bool flag = true;

        while (!q.empty()) {

            int size = q.size();
            vector<int> current;

            for (int i = 0; i < size; i++) {

                TreeNode* node = q.front();
                q.pop();

                current.push_back(node->val);

                // Always push left first, then right
                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            // Reverse alternate levels
            if (!flag) {
                reverse(current.begin(), current.end());
            }

            ans.push_back(current);

            flag = !flag;
        }

        return ans;
    }
};