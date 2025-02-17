class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min=nums[0];
        for(int i=1;i<nums.size();i++){
            if(abs(min)>abs(nums[i])){
                
                min = nums[i];
            }
            if(abs(min) == abs(nums[i])){
                min = max(min,nums[i]);
            }
        }
        return min;
    }
};