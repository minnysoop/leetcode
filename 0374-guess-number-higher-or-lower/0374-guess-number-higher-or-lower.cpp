/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

typedef long long ll;

class Solution {
public:
    int guessNumber(int n) {
        ll lo = 1;
        ll hi = n;
        ll mid;
        
        while (lo <= hi) {
            mid = (lo + hi) / 2;
            
            if (guess(mid) == 0){
                return mid;
            }
            else if (guess(mid) == -1){
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        return -1;
    }
};