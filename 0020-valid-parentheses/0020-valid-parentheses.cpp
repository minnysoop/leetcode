class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>open;
        for (int i=0;i<n;i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                open.push(s[i]);
            }
            else {
                if (open.empty()) {
                    return false;
                }
                else if ((open.top() == '(' && s[i] == ')') || (open.top() == '{' && s[i] == '}') || (open.top() == '[' && s[i] == ']')) {
                    open.pop();
                }
                else {
                    return false;
                }
            }
        }
                     
        if (!open.empty()){
            return false;
        }
                     
        return true;
    }
};