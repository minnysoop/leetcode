class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                int v = (nums[i]-1) * (nums[j]-1);
                if (v > mx){
                    mx = v;
                }
            }
        }
        return mx;
    }
};