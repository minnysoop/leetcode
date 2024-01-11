class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        set<char> v = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        vector<char>vc;
        for (int i=0;i<n;i++){
            if (v.find(s[i]) != v.end()){
                vc.push_back(s[i]);
            }
        }
        sort(vc.begin(), vc.end());
        
        string r = "";
        int j = 0;
        for (int i=0;i<n;i++){
            if (v.find(s[i]) != v.end()){
                r += vc[j];
                j++;
            }
            else {
                r += s[i];
            }
        }
        return r;
    }
};