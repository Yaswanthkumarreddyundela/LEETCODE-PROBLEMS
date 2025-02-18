class Solution {
public:
    string smallestNumber(string pattern) {
        string result;
        stack<int> st;

        for (int i = 0; i <= pattern.length(); i++) {
            st.push(i + 1);

            // If we reach 'I' or the end of the pattern, pop from the stack
            if (i == pattern.length() || pattern[i] == 'I') {
                while (!st.empty()) {
                    result += to_string(st.top());
                    st.pop();
                }
            }
        }
        return result;
    }
};
