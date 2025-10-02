class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int prefix = 1, suffix = 1;
        
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        for (int i = n-1; i >= 0; i--) {
            ans[i] *= suffix; 
            suffix *= nums[i];
        }
        return ans;
    }
};