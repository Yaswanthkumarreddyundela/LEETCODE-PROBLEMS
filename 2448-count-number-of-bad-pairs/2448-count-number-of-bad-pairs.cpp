class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long gp=0;
        long long n = nums.size();
        long long tp = (n*(n-1))/2;
        unordered_map<int,int> badpairs;
        for(long long i=0;i<n;i++){
            int key = nums[i]-i;
            gp += badpairs[key];
            badpairs[key]++;
        }
        return tp-gp;
    }
};