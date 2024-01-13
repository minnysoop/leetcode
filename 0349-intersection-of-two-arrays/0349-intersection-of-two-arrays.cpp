class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set<int>s;
        int p1 = 0;
        int p2 = 0;
        while (p1 < nums1.size() && p2 < nums2.size()){
            if (nums1[p1] == nums2[p2]) {
                s.insert(nums1[p1]);
                p1 += 1;
                p2 += 1;
            }
            else if (nums1[p1] > nums2[p2]) {
                p2 += 1;
            }
            else {
                p1 += 1;
            }
        }
        
        vector<int>res;
        set<int>::iterator it;
        for (it=s.begin();it != s.end();it++){
            res.push_back(*it);
        }
        
        return res;
    }
};