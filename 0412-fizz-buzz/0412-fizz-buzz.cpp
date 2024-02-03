class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>res;
        int i = 0;
        while (i < n){
            int c = i + 1;
            if (c%3 == 0 && c%5 == 0){
                res.push_back("FizzBuzz");
            }
            else if (c%3==0){
                res.push_back("Fizz");
            }
            else if (c%5==0){
                res.push_back("Buzz");
            }
            else {
                res.push_back(to_string(c));
            }
            
            i++;
        }
        
        return res;
    }
};