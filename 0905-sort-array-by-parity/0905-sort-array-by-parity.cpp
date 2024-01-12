class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int>r;
        for (int i=0;i<n;i++){
            if (nums[i]%2 == 0){
                r.push_back(nums[i]);
            }
        }
        
        for (int i=0;i<n;i++){
            if (nums[i]%2 != 0){
                r.push_back(nums[i]);
            }
        }
        
        return r;
    }
};