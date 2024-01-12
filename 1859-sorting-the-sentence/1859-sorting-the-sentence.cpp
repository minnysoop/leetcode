class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        vector<string>vs(9, " ");
        
        string w = "";
        int i=0;
        while (i < s.size()){
            if (s[i] == ' '){
                int p = w[w.size()-1] - '0' - 1;
                vs[p] = w.substr(0,w.size()-1);
                w = "";
            }
            else {
                w += s[i];
            }
            i += 1;
        }
        int p = w[w.size()-1] - '0' - 1;
        vs[p] = w.substr(0,w.size()-1);
        
        string r = "";
        for (int i=0;i<9;i++){
            if (vs[i] == " "){
                continue;
            }
    
            r += vs[i] + " ";
        }
        
        return r.substr(0,r.size()-1);
    }
};