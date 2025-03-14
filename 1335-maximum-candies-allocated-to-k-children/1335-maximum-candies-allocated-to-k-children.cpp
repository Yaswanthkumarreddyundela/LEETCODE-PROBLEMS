class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int ans = 0;
        if(sum1(candies) < k) return ans;
        int left = 1;
        int right = sum1(candies)/k;
        while(left<=right){
            int mid = (left+right)/2;
            int res=0;
            for(int j=0;j<candies.size();j++){
                res += candies[j]/mid;
            }
            if(res == k){
                ans=mid;
                break;

            }
            else if( res > k){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
            
        }
        return ans;
    }
    int sum1(vector<int> & k){
        int sum=0;
        for(int i=0;i<k.size();i++){
            sum+=k[i];
        }
        return sum;
    }

};