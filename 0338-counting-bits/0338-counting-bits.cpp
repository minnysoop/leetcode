class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>vb(n+1,0);
        
        int i = 1;
        while (i <= n){
            if (i%2==0){
                vb[i] = vb[i/2];
            }
            else {
                vb[i] = vb[i-1] + 1;
            }
        
            i++;
        }
        
        return vb;
    }
};