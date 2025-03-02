class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> sum;
        for(auto num : nums1){
            sum[num[0]]+=num[1];
        }
        for(auto num : nums2){
            sum[num[0]]+=num[1];
        }
        vector<vector<int>> ans;
        for(auto [key,val] : sum){
            ans.push_back({key,val});
        }
        return ans;

    }
};