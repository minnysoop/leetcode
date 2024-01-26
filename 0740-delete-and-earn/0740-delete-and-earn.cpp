class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        
        map<int,int>mp;
        int mx = INT_MIN;
        for (int i=0;i<n;i++){
            if (mp.find(nums[i]) != mp.end()){
                mp[nums[i]] += nums[i];
            }
            else {
                mp[nums[i]] = nums[i];
                
                if (nums[i] > mx) {
                    mx = nums[i];
                }
            }
        }
        
        vector<int>vi(mx,0);
        map<int,int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++){
            vi[it->first - 1] = it->first;
        }
        
        for (int i=0;i<mx;i++){
            vi[i] = mp[vi[i]];
        }
        
        if (mx == 1){
            return vi[0];
        }
        
        int a = vi[0];
        int b = max(vi[0], vi[1]);
        for (int i=2;i<vi.size();i++){
            int c = max(b, a + vi[i]);
            a = b;
            b = c;
        }
        
        return max(a, b);
    }
};