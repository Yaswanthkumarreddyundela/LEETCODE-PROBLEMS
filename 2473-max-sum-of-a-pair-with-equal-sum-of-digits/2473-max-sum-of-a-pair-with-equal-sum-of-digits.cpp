class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> pair;
        int sum=0;
        int max1=-1;
        for(auto i : nums){
            pair[sumofdigits(i)].push_back(i);
        }
        for( auto &i : pair){
            int n= i.second.size();
            if (i.second.size() > 1) {
                sort(i.second.rbegin(), i.second.rend());
                max1 = max(max1, i.second[0] + i.second[1]);
            }
        }
        return max1;
        
    }
    int sumofdigits(int a){
        int sum=0;
        while(a>0){
            sum += a % 10;
            a /= 10;
        }
        return sum;

    }
};