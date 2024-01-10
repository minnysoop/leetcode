class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c = 0;
        int lo = 0;
        int hi = n - 1;
        
        while (lo <= hi) {
            if (nums[lo] + nums[hi] < target) {
                c += hi - lo;
                lo += 1;
            }
            else{
                hi -= 1;
            }
        }
        
        return c;
    }
};