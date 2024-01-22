class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        
        int mxw = INT_MIN;
        for (int i=0;i<n;i++){
            int j = 0;
            int c = 0;
            while (j < sentences[i].size()){
                if (sentences[i][j] == ' ') {
                    c++;
                }
                j++;
            }
            
            if (c + 1 > mxw){
                mxw = c + 1;
            }
        }
        
        return mxw;
    }
};