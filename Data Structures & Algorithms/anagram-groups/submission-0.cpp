class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>>mp;

        for(int i = 0; i<strs.size(); i++){
            vector<int>freq(26, 0);

            string str = strs[i];

            for(char c: str){
                freq[c-'a']++;
            }

            mp[freq].push_back(str);
        }

        vector<vector<string>> sol;

        for(auto x: mp){
            sol.push_back(x.second);
        }

        return sol;
    }
};
