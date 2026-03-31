class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        vector<int> alphaFreq(26,0);

        int n = s.size();

        for(int i = 0; i<n ; i++){
            int sIdx = s[i] - 'a';
            int tIdx = t[i] - 'a';

            alphaFreq[sIdx]++;
            alphaFreq[tIdx]--;
        }

        for(int x: alphaFreq){
            if(x!=0) return false;
        }

        return true;
    }
};
