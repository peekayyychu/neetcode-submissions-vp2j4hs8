class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>occ;

        for(int i = 0; i<nums.size(); i++){
            int rem = target - nums[i];

            if(occ.find(rem)!=occ.end()){
                return {occ[rem], i};
            }

            occ[nums[i]] = i;
        }

        return {-1,-1};
    }
};
