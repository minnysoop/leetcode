class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, n = s.length();
        int c = 0;
        for (i = n-1; i >= 0; i--){
            if (s[i] != ' '){
                c++;
            } else if (c == 0) {
                continue;
            } else {
                break;
            }
        }
        return c;
    }
};