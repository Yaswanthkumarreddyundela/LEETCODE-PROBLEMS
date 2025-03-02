class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> sum;
        for(int i=0;i<nums1.size();i++){
            sum[nums1[i][0]] = nums1[i][1];
        }
        for(int i=0;i<nums2.size();i++){
            if(sum.find(nums2[i][0]) != sum.end()){
                sum[nums2[i][0]] += nums2[i][1];
            }
            else{
                sum[nums2[i][0]] = nums2[i][1];
            }
        }
        vector<vector<int>> sum1;
        for(auto i : sum){
            sum1.push_back({i.first,i.second});
        }
        return sum1;

    }
};