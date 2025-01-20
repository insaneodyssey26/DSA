class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int nextBig;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[pivot] < nums[i]) {
                nextBig = i;
                break;
            }
        }
        swap(nums[pivot], nums[nextBig]);
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};