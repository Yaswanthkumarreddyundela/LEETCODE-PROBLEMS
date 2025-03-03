class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> result(n); // Auxiliary array to avoid extra vector storage
        int left = 0, right = n - 1, pivotCount = 0;

        // Count pivot occurrences and place elements less than pivot
        for (int num : nums) {
            if (num < pivot) 
                result[left++] = num;
            else if (num == pivot) 
                pivotCount++;
        }

        // Place pivot elements
        for (int i = 0; i < pivotCount; i++) 
            result[left++] = pivot;

        // Place elements greater than pivot
        for (int num : nums) {
            if (num > pivot) 
                result[left++] = num;
        }

        return result; // Return modified array
    }
};
