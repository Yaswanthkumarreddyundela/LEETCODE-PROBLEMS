class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long> , greater<long long> > pt;
        long long count=0;
        for(long long i:nums){
            pt.push(i);
        }
        while(pt.top()<k){
            long long x = pt.top();
            pt.pop();
            long long y = pt.top();
            pt.pop();
            pt.emplace(x*2+y);
            count++;
        }
        return count;
        
    }
};