class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate;
        for (auto num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (candidate == num) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};