class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        int mul=1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                mul *= nums[i];
            }
            else{
                count++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(count>1){
                ans.push_back(0);
            }
            else if (count == 1 && nums[i] == 0 ){
                ans.push_back(mul);
            }
            else if(count == 1 && nums[i] != 0){
                ans.push_back(0);
            }
            else if(count==0){
                ans.push_back(mul/nums[i]);
            }

        }
        return ans;
    }
};