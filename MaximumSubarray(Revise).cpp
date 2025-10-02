class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0, maximum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            current += nums[i];
            maximum = max(current, maximum);

            if (current < 0) {
                current = 0;
            }
        }
        return maximum;
    }
};