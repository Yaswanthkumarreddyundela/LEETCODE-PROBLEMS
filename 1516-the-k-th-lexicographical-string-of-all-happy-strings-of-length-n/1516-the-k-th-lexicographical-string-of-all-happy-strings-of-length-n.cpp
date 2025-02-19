class Solution {
public:
    string getHappyString(int n, int k) {
        int total = 3 * (1 << (n - 1));  // Total number of happy strings of length n
        if (k > total) return "";  // If k is out of bounds, return empty string

        string result = "";
        char happy[3] = {'a', 'b', 'c'};

        k--;  // Convert 1-based k to 0-based index
        
        // Determine each character directly
        for (int i = 0; i < n; i++) {
            int group_size = 1 << (n - 1 - i);  // Each prefix choice leads to this many strings
            int index = k / group_size;  // Which character group are we in?
            
            // Select the correct character
            if (i == 0) {
                result += happy[index];
            } else {
                // Pick a character different from the previous one
                for (char ch : happy) {
                    if (ch != result.back()) {  
                        if (index == 0) {  // If it's the correct index, add to result
                            result += ch;
                            break;
                        }
                        index--;  // Decrease index count if we skip a choice
                    }
                }
            }
            
            k %= group_size;  // Update k for next iteration
        }

        return result;
    }
};
