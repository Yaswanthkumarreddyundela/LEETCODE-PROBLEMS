class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        unordered_map<int,int> check;
        for( int i=0;i<nums.size();i++){
            int key = target - nums[i];
            if(check.find(key) != check.end()){
                sum.push_back(i);
                sum.push_back(check[key]);
            }
            else{
                check[nums[i]]=i;
            }
        }
        return sum;
    }
};