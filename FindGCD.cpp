class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minimum = nums[0], maximum = nums[0];
        for (auto i : nums) {
            if (i < minimum) minimum = i;
            if (i > maximum) maximum = i;
        }
        int gcdOfNums = gcd(maximum, minimum);
        return gcdOfNums;
    }
};
