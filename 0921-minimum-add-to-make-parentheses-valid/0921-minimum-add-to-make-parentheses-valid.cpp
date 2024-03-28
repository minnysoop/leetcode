class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>o;
        int count = 0;
        for (int i=0;i<s.size();i++){
            if (s[i] == '(') {
                o.push(s[i]);
            }
            else {
                if (o.empty()){
                    count += 1;
                }
                else {
                    o.pop();
                }
            }
        }
        return count + o.size();
    }
};