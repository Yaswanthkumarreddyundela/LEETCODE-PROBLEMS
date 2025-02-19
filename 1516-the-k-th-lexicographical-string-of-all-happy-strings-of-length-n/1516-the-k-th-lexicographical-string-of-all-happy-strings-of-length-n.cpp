class Solution {
public:
    string getHappyString(int n, int k) {
        int total = 3 * (1 << (n - 1));  // Total happy strings of length n
        if (k > total) return "";  // If k is out of bounds, return empty string

        string result = "";
        char happy[3] = {'a', 'b', 'c'};

        k--;  // Convert 1-based index to 0-based

        for (int i = 0; i < n; i++) {
            int group_size = 1 << (n - 1 - i);  // Size of each subgroup
            int index = k / group_size;  // Find the index in the available choices

            if (i == 0) {
                result += happy[index];  // First character directly
            } else {
                for (char ch : happy) {
                    if (ch != result.back()) {  // Ensure no consecutive duplicates
                        if (index == 0) {
                            result += ch;
                            break;
                        }
                        index--;
                    }
                }
            }

            k %= group_size;  // Reduce k for next iteration
        }

        return result;
    }
};
