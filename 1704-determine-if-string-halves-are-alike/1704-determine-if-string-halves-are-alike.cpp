class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char>v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int h = s.size()/2;
        int fhv = 0;
        int shv = 0;
        for (int i=0;i<s.size();i++){
            if (v.find(s[i]) != v.end()){
                if (i < h) {
                    fhv += 1;
                }
                else {
                    shv += 1;
                }
            }
        }
        
        return fhv == shv;
    }
};