class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        for(int x: nums){
            if(set.find(x)!=set.end()){
                return true;
            }

            set.insert(x);
        }

        return false;
    }
};