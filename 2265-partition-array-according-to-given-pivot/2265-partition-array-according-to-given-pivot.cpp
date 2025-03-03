class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int count=0;
        vector<int> ans;
        for(int i : nums){
            if(pivot>i){
                ans.push_back(i);
            }
            else if(i == pivot){
                count++;
            }
        }
        if(count >0){
            for(int i=0;i<count;i++){
                ans.push_back(pivot);
            }
        }
        for(int i : nums){
            if(pivot<i){
                ans.push_back(i);
            }
        }
        return ans;

    }
};