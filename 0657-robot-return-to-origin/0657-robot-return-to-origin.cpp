class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        pair<int, int>pos{0,0};
        for (int i=0;i<n;i++){
            if (moves[i] == 'R'){
                pos.first++;
            }
            else if (moves[i] == 'L'){
                pos.first--;
            }
            else if (moves[i] == 'U'){
                pos.second++;
            }
            else {
                pos.second--;
            }
        }
        
        return !pos.first && !pos.second;
    }
};