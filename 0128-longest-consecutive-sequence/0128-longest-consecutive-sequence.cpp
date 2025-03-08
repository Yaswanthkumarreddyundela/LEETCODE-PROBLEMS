#include <unordered_set>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxcount = 0;
        
        for(int num : numSet) {
            if(numSet.find(num - 1) == numSet.end()) {  // Check if it's the start of a sequence
                int count = 1;
                int current = num;
                
                while(numSet.find(current + 1) != numSet.end()) {
                    current++;
                    count++;
                }
                maxcount = max(maxcount, count);
            }
        }
        return maxcount;
    }
};
