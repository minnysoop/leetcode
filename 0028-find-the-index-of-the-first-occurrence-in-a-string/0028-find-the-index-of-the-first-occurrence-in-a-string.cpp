class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int hn = haystack.size();
        int nn = needle.size();
        
        int j = 0;
        for (int i = 0; i < hn; i++){
            if (haystack[i] == needle[0]){
                string t = haystack.substr(i,nn);
                if (t == needle){
                    return i;
                }
            }
        }
        return -1;
    }
};