class Solution {
public:
    typedef long long ll;
    int mySqrt(int x) {
        ll lo = 1;
        ll hi = x;
        ll r = 0;
        ll mid;
        while (lo <= hi){
            mid = lo + (hi - lo) / 2;
            if (mid * mid == x){
                return mid;
            }
            else if (mid * mid < x) {
                r = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return r;
    }
};