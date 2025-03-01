class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Merge adjacent equal elements
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        // Step 2: Shift nonzero elements to the left
        int pos = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                nums[pos++] = nums[i];
            }
        }

        // Step 3: Fill remaining positions with zeros
        while(pos < n) {
            nums[pos++] = 0;
        }

        return nums;
    }
};
