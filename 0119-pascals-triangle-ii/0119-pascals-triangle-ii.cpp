class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>vi(rowIndex+1, 0);
        vi[0] = 1;
        
        for (int i=1;i<rowIndex+1;i++){
            
            int j = i;
            while (j >= 1){
                vi[j] += vi[j-1];
                j--;
            }
        }
        
        return vi;
    }
};