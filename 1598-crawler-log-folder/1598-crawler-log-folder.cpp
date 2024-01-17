class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ops = 0;
        int n = logs.size();
        for (int i=0;i<n;i++){
            if (logs[i] == "../"){
                if (ops != 0) {
                    ops--;
                }
            }
            else if (logs[i] == "./"){
                continue;
            }
            else {
                ops++;
            }
        }
        
        return ops;
    }
};