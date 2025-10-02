class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> pikachu(nums.begin(), nums.end());
        int longest = 0;

        for (int num: pikachu) {
            if (!pikachu.count(num - 1)) {
                int current = num;
                int ans = 1;

                while (pikachu.count(current + 1)) {
                    ans++;
                    current++;
                }
                longest = max(longest, ans);
            }
        }
        return longest;
    }
};