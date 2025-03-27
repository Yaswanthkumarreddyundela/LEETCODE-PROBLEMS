class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int ans = -1;
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        int dom =0;
        for(auto [key,val] : freq){
            if(val > (nums.size()/2)){
                dom=key;
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==dom) count++;
            if((count > (i+1)/2) && ((freq[dom]-count) > ((nums.size()-i-1)/2))){
                ans =i;
                break;
            }
        }
        return ans;
    }
};