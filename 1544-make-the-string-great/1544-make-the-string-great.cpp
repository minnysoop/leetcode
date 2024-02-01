class Solution {
public:
    bool isGood(string s){
        int n = s.size();
        for (int i=0;i<n-1;i++){
            if (0 <= i && i <= n-2 && (isupper(s[i+1]) && tolower(s[i+1]) == s[i] || isupper(s[i]) && tolower(s[i]) == s[i+1])) {
                return false;
            }
        }
        return true;
    }
    
    string makeGood(string s) {
        int n = s.size();
        while (not isGood(s)){
            for (int i=0;i<n-1;i++){
                if (0 <= i && i <= n-2 && (isupper(s[i+1]) && tolower(s[i+1]) == s[i] || isupper(s[i]) && tolower(s[i]) == s[i+1])) {
                    s.erase(i,2);
                }
            }
            
        }
        return s;
    }
};