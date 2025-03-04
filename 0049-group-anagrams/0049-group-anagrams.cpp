class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> dup;
        for(string s : strs){
            string k = s;
            sort(k.begin(),k.end());
            dup[k].push_back(s);
        }
        for(auto [key,val] : dup){
            ans.push_back(val);
        }
        return ans;
        
    }
};