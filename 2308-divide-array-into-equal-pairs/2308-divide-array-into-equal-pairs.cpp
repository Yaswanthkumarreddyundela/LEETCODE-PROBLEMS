class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        for(auto [key,val] : freq){
            if(val % 2 !=0 ){
                return false;
            }
        }
        return true;
    }
};