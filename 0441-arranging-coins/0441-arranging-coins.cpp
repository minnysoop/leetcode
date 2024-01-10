class Solution {
public:
    typedef long long ll;
    int arrangeCoins(int n) {
        ll min = 1;
        ll max = n;
        ll mid = 0;
        ll r = 0;
        
        while (min <= max){
            mid = (min + max) / 2;
            
            ll sum = mid * (mid + 1) / 2;
            
            if (sum == n){
                return mid;
            }
            else if (sum < n) {
                r = mid;
                min = mid + 1;
            }
            else {
                max = mid - 1;
            }
            
        }
        
        return r;
    }
};