class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> dup;

        for (const string& s : strs) {  // Use const reference to avoid unnecessary copying
            string k = s;  
            sort(k.begin(), k.end());  
            dup[k].push_back(s);  
        }

        vector<vector<string>> ans;
        ans.reserve(dup.size());  // Optimize memory allocation

        for (auto& [key, val] : dup) {
            ans.push_back(std::move(val));  // Move instead of copy for efficiency
        }

        return ans;
    }
};
