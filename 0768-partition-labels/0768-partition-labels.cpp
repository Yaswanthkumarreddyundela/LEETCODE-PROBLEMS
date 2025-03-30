class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int ,int> pos;
        for(int i=0;i<s.size();i++){
            pos[s[i]]=i;
        }
        vector<int>res;
        int start=0,end=0;
        for(int i=0;i<s.size();i++){
            end = max(end,pos[s[i]]);
            if(end == i){
                res.push_back(end-start+1);
                start = i+1;
            }
        }
        return res;
    }
};