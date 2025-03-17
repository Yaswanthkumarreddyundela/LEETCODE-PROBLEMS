class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int lm = height[0];
        int rm = height[r];
        int ans=0;
        while(l<r){
            if(lm<rm){
                l++;
                lm = max(lm,height[l]);
                ans = ans + (lm - height[l]);
            }else{
                r--;
                rm = max(rm,height[r]);
                ans = ans + (rm - height[r] );
            }
        }
        return ans;
    }
};