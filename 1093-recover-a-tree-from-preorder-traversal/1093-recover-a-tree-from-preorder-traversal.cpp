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
    TreeNode* recoverFromPreorder(string traversal) {
        stack<TreeNode*> st;
        int i = 0, n = traversal.size();

        while (i < n) {
            int depth = 0;

            // Count dashes to determine depth
            while (i < n && traversal[i] == '-') {
                depth++;
                i++;
            }

            // Extract multi-digit number
            int num = 0;
            while (i < n && isdigit(traversal[i])) {
                num = num * 10 + (traversal[i] - '0');
                i++;
            }

            // Create a new node
            TreeNode* node = new TreeNode(num);

            // Ensure stack maintains correct depth
            while (st.size() > depth) 
                st.pop();

            // Attach to the parent
            if (!st.empty()) {
                if (!st.top()->left) {
                    st.top()->left = node;
                } else {
                    st.top()->right = node;
                }
            }

            // Push new node onto stack
            st.push(node);
        }

        // Root node is at the bottom of the stack
        while (st.size() > 1) 
            st.pop();

        return st.top();
    }
};