class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char>rs;
        for (int i=0;i<n;i++){
            if (rs.empty() || rs.top() != s[i]) {
                rs.push(s[i]);
            }
            else {
                rs.pop();
            }
        }
        
        string r = "";
        while (!rs.empty()) {
            r = rs.top() + r;
            rs.pop();
        }
        
        return r;
    }
};