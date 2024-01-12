class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(), prices.end());
        
        int spnt = 0;
        int bt = 0;
        for (int i=0;i<n;i++){
            spnt += prices[i];
            bt += 1;
            
            if (bt == 2){
                break;
            }
        }
        
        if (spnt > money){
            return money;
        }
        else {
            return money - spnt;
        }
    }
};