class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int i : nums){
            freq[i]++;
        }
        int max =0;
        for(auto [key,val] : freq){
            if(val>(n/2)){
                max=key;
            }
        }
        return max;
    }
};