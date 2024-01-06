class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>vi;
        vi.push_back(0);
        int max = 0;
        for (int i=0;i<gain.size();i++){
            int na = vi[vi.size()-1] + gain[i];
            vi.push_back(na);
            if (na > max){
                max = na;
            }
        }
        return max;
    }
};