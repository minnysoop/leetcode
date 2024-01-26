class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        int cnt[10001] = {0};
        for (int i=0;i<n;i++){
            cnt[nums[i]]+=nums[i];
        }
        
        int a = cnt[0];
        int b = max(cnt[0], cnt[1]);
        for (int i=2;i<10001;i++){
            int c = max(b, a + cnt[i]);
            a = b;
            b = c;
        }
        
        return max(a, b);
    }
};