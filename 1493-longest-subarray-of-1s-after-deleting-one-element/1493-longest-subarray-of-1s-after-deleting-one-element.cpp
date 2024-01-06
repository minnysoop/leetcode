class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int k = 1;
        while (j < nums.size()) {
            if (nums[j] != 1){
                k -= 1;
            }

            if (k < 0){
                if (nums[i] == 0){
                    k += 1;
                }
                i++;
            }
            j++;
        }

        return j - i - 1;
    }
};