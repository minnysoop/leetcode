class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1){
            return nums[0];
        }
        int t = n / 2;
        
        map<int, int>mp;
        int res;
        for (int i=0;i<n;i++){
            if (mp.find(nums[i]) != mp.end()){
                mp[nums[i]] += 1;
                
                if (mp[nums[i]] > t){
                    res = nums[i];
                    break;
                }
                
            }
            else {
                mp[nums[i]] = 1;
            }
        }
        
        return res;
        
    }
};