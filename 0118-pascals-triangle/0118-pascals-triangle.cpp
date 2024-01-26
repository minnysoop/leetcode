class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>vvi;
        
        vector<int>vi;
        vi.push_back(1);
        vvi.push_back(vi);
        
        if (numRows == 1){
            return vvi;
        }
        
        vector<int>v;
        v.push_back(1);
        v.push_back(1);
        vvi.push_back(v);
        
        for (int i=2;i<numRows;i++){
            vector<int>curr;
            curr.push_back(1);
            vector<int>prev = vvi[vvi.size()-1];
            for (int j=1;j<prev.size();j++){
                curr.push_back(prev[j] + prev[j-1]);
            }
            curr.push_back(1);
            vvi.push_back(curr);
        }
        
        return vvi;
        
    }
};