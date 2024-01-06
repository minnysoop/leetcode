
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Find the shortest string and use that to compare with all other strings
        string shortest_string;
        for (int i = 0; i < strs.size(); i++){
            if (i == 0){
                shortest_string = strs[i];
            }
            else {
                if (shortest_string.length() > strs[i].length()){
                    shortest_string = strs[i];
                }
            }
        }

        string common_prefix = "";
        // For every string in the list
        for (int i = 0; i < shortest_string.size(); i++){
            bool allSame = true;
            for (int j = 0; j < strs.size(); j++){
                // - Compare each ith character of every string
                if (shortest_string[i] != strs[j][i]) {
                    allSame = false;
                }
            }
            if (!allSame){
                break;
            }
            else {
                common_prefix += shortest_string[i];
            }
        }

        return common_prefix;
    }
};