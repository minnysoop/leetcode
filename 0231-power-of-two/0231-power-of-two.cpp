class Solution {
public:
    typedef long long ll;
    bool isPowerOfTwo(int n) {
        ll num = n;
        if (num == 1){
            return true;
        }
        
        if (num % 2 != 0 || num == 0){
            return false;
        }
        
        return isPowerOfTwo(num/2);
        
    }
};