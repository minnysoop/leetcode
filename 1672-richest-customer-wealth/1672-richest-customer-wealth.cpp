class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int mxw = 0;
        for (int i=0;i<m;i++){
            vector<int>c = accounts[i];
            int cw = accumulate(c.begin(), c.end(), 0);
            
            if (cw > mxw){
                mxw = cw;
            }
        }
        
        return mxw;
    }
};