class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>h = heights;
        sort(heights.begin(), heights.end());
        
        int i = 0;
        int c = 0;
        while (i < heights.size()){
            if (h[i] != heights[i]) {
                c += 1;
            }
            i += 1;
        }
        
        return c;
    }
};