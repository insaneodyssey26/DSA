class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, left = 0, right = nums.size() - 1;

        while (i <= right) {
            if (nums[i] == 0) {
                swap(nums[left], nums[i]);
                left++;
            }
            if (nums[i] == 2) {
                swap (nums[i], nums[right]);
                right--;
                i--;
            }
            i++;
        }
    }
};