class Solution {
public:
    int strStr(string haystack, string needle) {
        int hn = haystack.size();
        int nn = needle.size();
        for (int i=0;i<hn-nn+1;i++){
            string s = "";
            for (int j=i; j<i+nn;j++){
                s += haystack[j];
            }
            
            if (s == needle){
                return i;
            }
        }
        
        return -1;
    }
};