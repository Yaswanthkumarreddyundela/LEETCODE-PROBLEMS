class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string result;
        for(int i=0;i<nums.size();i++){
            nums[i][i] == '0'? result+='1':result+='0';
        }
        return result;
    }
};


