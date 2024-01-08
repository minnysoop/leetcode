class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0;
        int j=k-1;
        int mn = INT_MAX;
        while (j < blocks.size()){
            int w =0;
            for (int l=i;l<=j;l++){
                if (blocks[l] == 'W'){
                    w += 1;
                }
            }
            
            if (w < mn){
                mn = w;
            }
            
            i += 1;
            j += 1;
        }
        
        return mn;
    }
};