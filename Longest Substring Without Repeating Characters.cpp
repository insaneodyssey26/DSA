class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, bool> mp;
        int i = 0, j = 0;
        int length = 0;

        while (j < s.size()) {
            if (!mp[s[j]]) {
                mp[s[j]] = 1;
                length = max(length, j - i + 1);
                j++;
            } else {
                mp[s[i]] = 0;
                i++;
            }
        }

        return length;
    }
};