class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        int mul=1;
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
                nums[i]=0;
            }
            else if (count == 1  ){
                nums[i] = (nums[i] == 0 )? mul : 0;
            }
            else if(count==0){
                nums[i] = mul / nums[i];
            }

        }
        return nums;
    }
};