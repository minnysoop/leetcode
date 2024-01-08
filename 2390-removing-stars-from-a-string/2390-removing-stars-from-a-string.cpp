class Solution {
public:
    string removeStars(string s) {
        stack<char>ss;
        for (int i=s.size()-1;i>=0;i--){
            ss.push(s[i]);
        }
        
        string r = "";
        while (!ss.empty()){
            if (ss.top() == '*'){
                if (!r.empty()){
                    r.pop_back();
                }
            }
            else{
                r += ss.top();
            }
            ss.pop();
        }
        
        return r;
        
    }
};