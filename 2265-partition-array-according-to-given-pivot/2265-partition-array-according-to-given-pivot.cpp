class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller, equal, greater;
        
        // Categorize elements
        for (int num : nums) {
            if (num < pivot) 
                smaller.push_back(num);
            else if (num == pivot) 
                equal.push_back(num);
            else 
                greater.push_back(num);
        }
        
        // Concatenate results
        smaller.insert(smaller.end(), equal.begin(), equal.end());
        smaller.insert(smaller.end(), greater.begin(), greater.end());
        
        return smaller;
    }
};
