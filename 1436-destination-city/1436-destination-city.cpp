class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        map<string, string>ms;
        for (int i=0;i<n;i++){
            string f = paths[i][0];
            string t = paths[i][1];
            ms[f] = t;
            if (ms.find(t) == ms.end()){
                ms[t] = "@";
            }
        }
        
        string res;
        map<string,string>::iterator it;
        for (it = ms.begin(); it != ms.end(); it++){
            if (it->second == "@"){
                res = it->first;
                break;
            }
        }
        return res;
    }
};