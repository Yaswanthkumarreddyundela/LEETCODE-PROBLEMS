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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        if (preorder.empty()) return nullptr;

        stack<TreeNode*> st;
        TreeNode* root = new TreeNode(preorder[0]);
        st.push(root);
        int postIdx = 0;

        for (int i = 1; i < preorder.size(); i++) {
            TreeNode* node = new TreeNode(preorder[i]);

            while (!st.empty() && st.top()->val == postorder[postIdx]) {
                st.pop();
                postIdx++;
            }

            if (!st.top()->left) {
                st.top()->left = node;
            } else {
                st.top()->right = node;
            }

            st.push(node);
        }
        return root;
    }
};