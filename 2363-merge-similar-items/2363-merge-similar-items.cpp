class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        sort(items1.begin(), items1.end());
        sort(items2.begin(), items2.end());
        int p1 = 0;
        int p2 = 0;
        vector<vector<int>>vvi;
        while (p1 < items1.size() && p2 < items2.size()){
            if (items1[p1][0] == items2[p2][0]) {
                vector<int>vi;
                vi.push_back(items1[p1][0]);
                vi.push_back(items1[p1][1] + items2[p2][1]);
                vvi.push_back(vi);
                p1 += 1;
                p2 += 1;
            }
            else if (items1[p1][0] > items2[p2][0]) {
                vvi.push_back(items2[p2]);
                p2 += 1;
            }
            else {
                vvi.push_back(items1[p1]);
                p1 += 1;
            }
        }
        
        for (int i=p1;i<items1.size();i++){
            vvi.push_back(items1[i]);
        }
        
        for (int i=p2;i<items2.size();i++) {
            vvi.push_back(items2[i]);
        }
        
        return vvi;
    }
};