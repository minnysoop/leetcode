class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string r = "";
        
        int i = 0;
        while (i < n){
            if (command[i] != '('){
                r += "G";
            }
            else {
                if (command[i+1] == ')'){
                    r += "o";
                    i++;
                }
                else {
                    r += "al";
                    i += 3;
                }
            }
            i++;
        }
        
        
        return r;
    }
};