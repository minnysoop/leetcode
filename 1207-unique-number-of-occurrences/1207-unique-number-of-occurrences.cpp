class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>mp;
        for (int i=0;i<arr.size();i++){
            if (mp.find(arr[i]) != mp.end()) {
                mp[arr[i]] += 1;
            }
            else {
                mp[arr[i]] = 1;
            }
        }
        
        set<int>s;
        map<int,int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++){
            s.insert(it->second);
        }
        
        return s.size() == mp.size();
    }
};