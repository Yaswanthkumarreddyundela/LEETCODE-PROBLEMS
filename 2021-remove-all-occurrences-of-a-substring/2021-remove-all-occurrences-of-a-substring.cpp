class Solution {
public:
    string removeOccurrences(string s, string part) {
        int length = part.size();
        while(s.find(part) != std::string::npos){
            int pos = s.find(part);
            s.erase(pos,length);
        }
        return s;
    }
};