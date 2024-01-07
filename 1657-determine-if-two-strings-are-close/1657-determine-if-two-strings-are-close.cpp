class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()){
            return false;
        }
        
        map<char, int>mp1;
        for (int i=0;i<word1.size();i++){
            if (mp1.find(word1[i]) == mp1.end()) {
                mp1[word1[i]] = 1;
            }
            else {
                mp1[word1[i]] += 1;
            }
        }
        
        map<char, int>mp2;
        for (int i=0;i<word2.size();i++){
            if (mp2.find(word2[i]) == mp2.end()) {
                mp2[word2[i]] = 1;
            }
            else {
                mp2[word2[i]] += 1;
            }
        }
        
        vector<int>vi1;
        vector<int>vi2;
        set<char>vc1;
        set<char>vc2;
        
        for (auto i = mp1.begin(); i != mp1.end(); i++){
            vi1.push_back(i->second);
            vc1.insert(i->first);
        }
        
        for (auto i = mp2.begin(); i != mp2.end(); i++){
            vi2.push_back(i->second);
            vc2.insert(i->first);
        }
        
        sort(vi1.begin(), vi1.end());
        sort(vi2.begin(), vi2.end());
        
        for (int i = 0; i < vi1.size(); i++){
            cout << vi1[i] << endl;
        }
        cout << endl;
        
        for (int i = 0; i < vi2.size(); i++){
            cout << vi2[i] << endl;
        }
        cout << endl;
        
        
        return vi1 == vi2 && vc1 == vc2;
        
    }
};