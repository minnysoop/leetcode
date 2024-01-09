class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>rq, dq;
        
        for (int i=0;i<senate.size();i++){
            if (senate[i] == 'R'){
                rq.push(i);
            }
            else {
                dq.push(i);
            }
        }
        
        int a, b;
        while (!rq.empty() and !dq.empty()){
            a = rq.front();
            b = dq.front();
            
            rq.pop();
            dq.pop();
            
            // The first in line wins
            if (a < b){
                // Offset by the size
                rq.push(a + senate.size());
            }
            else{
                dq.push(b + senate.size());
            }
            
        }

        if (rq.size() > dq.size()){
            return "Radiant";
        }
        return "Dire";
    }
};