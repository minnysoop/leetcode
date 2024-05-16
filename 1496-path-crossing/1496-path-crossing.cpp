class Solution {
public:
    bool isPathCrossing(string path) {
        vector<pair<int, int>>vp;
        pair<int,int>p;
        p.first = 0;
        p.second = 0;
        vp.push_back(p);
        int n = path.size();
        for (int i=0;i<n;i++){
            if (path[i] == 'N') {
                p.second += 1;
            }
            else if (path[i] == 'S') {
                p.second -= 1;
            }
            else if (path[i] == 'E') {
                p.first += 1;
            }
            else {
                p.first -= 1;
            }
            
            vp.push_back(p);
        }
        set<pair<int,int>>s;
        for (int i=0;i<vp.size();i++){
            s.insert(vp[i]);
        }
        
        return s.size() != vp.size();
    }
};