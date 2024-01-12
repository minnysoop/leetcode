class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = nums.size()-1;
        vector<int>res(n);
        int pos = n-1;
        
        while (l <= r) {
            int ls = nums[l] * nums[l];
            int rs = nums[r] * nums[r];
            if (ls < rs){
                res[pos--] = rs;
                r -= 1;
            }
            else {
                res[pos--] = ls;
                l += 1;
            }
        }
        return res;
    }
};