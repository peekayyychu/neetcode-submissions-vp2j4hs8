class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;

        int maxWater = INT_MIN;

        while(left<right){
            int hLeft = heights[left];
            int hRight = heights[right];

            int dist = right-left;

            if(hLeft<hRight) left++;
            else right--;

            int currWater = dist * min(hLeft, hRight);
            maxWater = max(currWater, maxWater);
        }

        return maxWater;
    }
};
