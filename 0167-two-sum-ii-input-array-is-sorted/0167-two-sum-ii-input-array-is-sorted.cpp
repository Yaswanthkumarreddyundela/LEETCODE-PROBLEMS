class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> check;
        int x=0,y=0;
        for( int i=0;i<numbers.size();i++){
            int key = target - numbers[i];
            if(check.find(key) != check.end()){
                x = check[key]+1;
                y = i+1;
            }
            else{
                check[numbers[i]]=i;
            }
        }
        return {x,y};
    }
};