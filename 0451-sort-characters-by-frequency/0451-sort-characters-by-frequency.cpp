class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        map<char,int>mp;
        for (int i=0;i<n;i++){
            if (mp.find(s[i]) == mp.end()){
                mp[s[i]] = 1;
            }
            else {
                mp[s[i]]++;
            }
        }
        
        vector<vector<int>>vvi;
        map<char,int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++){
            vector<int>vi;
            vi.push_back(it->second);
            vi.push_back(it->first);
            vvi.push_back(vi);
        }
        
        sort(vvi.rbegin(), vvi.rend());
        
        string r = "";
        for (int i=0;i<vvi.size();i++){
            for (int j=0;j<vvi[i][0];j++){
                r += vvi[i][1];
            }
        }

        return r;
    }
};