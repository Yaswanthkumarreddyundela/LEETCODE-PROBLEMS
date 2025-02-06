class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int count=0;
        vector<int> arr;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                arr.push_back(nums[i]*nums[j]);
            }
        }
        unordered_map<int ,int> freq ;
        for(int i : arr){
            freq[i]++ ;
        }
        for(auto i : freq){
            int n= i.second;
            count += (n * (n - 1)) / 2 ;
        }
        return 8*count;
    }
};