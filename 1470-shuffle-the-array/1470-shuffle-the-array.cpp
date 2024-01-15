class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>fh;
        vector<int>sh;
        for (int i=0;i<2*n;i++) {
            if (i >= n){
                sh.push_back(nums[i]);
            }
            else {
                fh.push_back(nums[i]);
            }
        }
        
        vector<int>res;
        int p1 = 0;
        int p2 = 0;
        while (p1 < fh.size() && p2 < sh.size()) {
            res.push_back(fh[p1]);
            res.push_back(sh[p2]);
            p1 += 1;
            p2 += 1;
        }
        
        return res;
    }
};