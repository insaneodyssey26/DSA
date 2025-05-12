class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        int left_product = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = left_product;
            left_product *= nums[i];
        }

        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= right_product;
            right_product *= nums[i];
        }

        return answer;
    }
};
