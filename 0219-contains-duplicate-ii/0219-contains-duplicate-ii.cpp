class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int i, j;
        int n = nums.size();
        for (i = 0; i < n; i++) {
            j = i + 1;
            while (j <= i + k && j < n) {
                if (nums[i] == nums[j]) return true;
                j++;
            }
        }
        return false;
    }
};