class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            
            maxSum = max(maxSum, currSum);
            if (currSum < 0) {
                currSum = 0;
            }
            
        }
        return maxSum;
    }
};