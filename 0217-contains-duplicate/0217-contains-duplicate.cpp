class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count;
        unordered_map<int,int> freq;
        for(int i : nums){
            if(++freq[i] >1){
                return true;
            }
        }
        return false;
    }
};