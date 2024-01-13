class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>s;
        int p1 = 0;
        int p2 = nums.size()-1;
        sort(nums.begin(), nums.end());
        while (p1 < p2){
            int min = nums[p1];
            int mx = nums[p2];
            double avg = (min + mx) / 2.0;
            s.insert(avg);
            p1 += 1;
            p2 -= 1;
        }
        return s.size();
    }
};