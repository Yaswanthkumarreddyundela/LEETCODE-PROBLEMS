class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> m;
        for(string s : operations){
            if(s == "D"){
                m.push_back(m.back()*2);
            }
            else if(s == "C"){
                m.pop_back();
            }
            else if(s == "+"){
                int x = m[m.size()-1];
                int y = m[m.size()-2];
                m.push_back(x+y);
            }
            else{
                m.push_back(stoi(s));
            }
        }
        return sum(m);
        
    }
    int sum(vector<int> &k){
        int sum1=0;
        for(int i=0;i<k.size();i++){
            sum1+=k[i];
        }
        return sum1;
    }
};