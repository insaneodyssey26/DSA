class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            // Check if mid is part of the pair
            if (mid % 2 == 1) {
                mid--; // Ensure mid is even for comparison
            }

            // Compare mid and mid+1
            if (nums[mid] == nums[mid + 1]) {
                start = mid + 2; // Move to the right half
            } else {
                end = mid; // Move to the left half
            }
        }

        // The single non-duplicate element is at 'start' (or 'end')
        return nums[start];
    }
};