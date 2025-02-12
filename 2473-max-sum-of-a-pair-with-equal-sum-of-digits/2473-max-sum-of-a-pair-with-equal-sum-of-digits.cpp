class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, pair<int, int>> pair; // Stores the top 2 max values for each digit sum
        int max1 = -1;

        for (int num : nums) {
            int sum = sumofdigits(num);
            
            // Track top two largest values for each digit sum
            if (num > pair[sum].first) {
                pair[sum].second = pair[sum].first;
                pair[sum].first = num;
            } else if (num > pair[sum].second) {
                pair[sum].second = num;
            }
        }

        // Find the maximum pair sum
        for (const auto& i : pair) {
            if (i.second.second > 0) {  // Ensure at least 2 elements exist
                max1 = max(max1, i.second.first + i.second.second);
            }
        }

        return max1;
    }

    int sumofdigits(int a) {
        int sum = 0;
        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }
        return sum;
    }
};

