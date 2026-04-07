class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>targetFreq;

        for(char c: t){
            targetFreq[c]++;
        }

        int left = 0;
        int right = 0;

        int count = 0;

        int n = s.length();

        int minLen = INT_MAX;
        int minStart = 0;

        unordered_map<char, int>windowFreq;

        while(right < n){
            char c = s[right];
            windowFreq[c]++;

            if(targetFreq.count(c) && windowFreq[c] == targetFreq[c]){
                count++;
            }

            while(count == targetFreq.size()){
                if(right-left+1<minLen){
                    minLen = right - left + 1;
                    minStart = left;
                }

                char l = s[left];

                if(targetFreq.count(l) && windowFreq[l] == targetFreq[l]){
                    count--;
                }

                windowFreq[l]--;
                left++;
            }

            right++;
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};
