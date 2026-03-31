class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int>store(nums.begin(), nums.end());

        int maxCount = 1;

        for(int x: nums){
            if(store.find(x-1)==store.end()){
                int currNum = x;
                int currStreak = 1;

                while(store.find(currNum+1)!=store.end()){
                    currNum++;
                    currStreak++;
                }   

                maxCount = max(maxCount, currStreak);
            }
        }

        return maxCount;
    }
};
