class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        int ans=0;
        while(mini<=maxi){
            int mid = mini+(maxi-mini)/2 ;
            if(isValid(nums,k,mid)){
                maxi = mid-1;
                ans=mid;
            }
            else{
                mini = mid+1;
            }
            
        }
        return ans;
        
    }
    bool isValid(vector<int>& nums , int k , int cap ){
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<= cap){
                count++;
                i++;
            }
        }
        return count>=k;
    }
};