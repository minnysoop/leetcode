class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>r;
        
        sort(arr.begin(), arr.end());
        int md = INT_MAX;
        for (int i=1;i<n;i++){
            int df = arr[i] - arr[i-1];
            if (df < md){
                md = df;
            }
        }
        
        for (int i=1;i<n;i++){
            if (arr[i] - arr[i-1] == md){
                vector<int>c;
                c.push_back(arr[i-1]);
                c.push_back(arr[i]);
                r.push_back(c);
            }
        }
        
        return r;
    }
};