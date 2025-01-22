class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int num:nums){
            int y = abs(num);
            if(nums[y] < 0) return y;
            nums[y] = -nums[y];
        }
        return -1;
    }
};