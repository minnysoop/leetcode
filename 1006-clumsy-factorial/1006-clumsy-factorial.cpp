class Solution {
public:
    int clumsy(int n) {
        vector<int>vi;
        
        for (int i=n;i>0;i--){
            vi.push_back(i);
        }
        
        vector<int>res;
        int cnt = 3;
        int g;
        for (int i=0;i<vi.size();i++){
            if (cnt==3){
                g = vi[i];
                cnt--;
            }
            else if (cnt==2){
                g *= vi[i];
                cnt--;
            }
            else if (cnt==1){
                g /= vi[i];
                cnt--;
            }
            else{
                res.push_back(g);
                g = 0;
                res.push_back(vi[i]);
                cnt = 3;
            }
        }
        res.push_back(g);
        
        int val = res[0];
        bool plus = true;
        for (int i=1;i<res.size();i++){
            if (plus){
                val += res[i]; 
            }
            else {
                val -= res[i];
            }
            plus = !plus;
        }
        
        return val;
    }
};