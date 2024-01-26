class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>vb(n+1,0);
        
        int i = 0;
        while (i <= n){
            
            int c = i;
            int o = 0;
            while (c > 0){
                o += c%2;
                c /= 2;
            }
            
            vb[i] = o;
            i++;
        }
        
        return vb;
    }
};