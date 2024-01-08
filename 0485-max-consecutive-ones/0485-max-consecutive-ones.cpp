class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int mxc = 0;
        while (i < nums.size()){
            if (nums[i] == 1){
                int c_mxc = 0;
                int j = i;
                while (j < nums.size() && nums[j] == 1){
                    c_mxc += 1;
                    j++;
                }
                
                if (c_mxc > mxc){
                    mxc = c_mxc;
                }
                i = j - 1;
            }
            
            i++;
        }
        
        return mxc;
    }
};