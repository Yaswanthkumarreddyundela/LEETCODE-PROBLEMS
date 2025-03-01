class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] =0;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
        }
        int size=nums.size();
        int size1 = ans.size();
        for(int i=0;i<size-size1;i++){
            ans.push_back(0);
        }
        return ans;
    }
};