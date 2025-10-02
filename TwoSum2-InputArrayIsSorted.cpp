class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int s =0, e = num.size()-1;
        while (num[s] + num[e] != target) {

            if (num[s] + num[e] < target) {
                s++;
            } else
                e--;
        }
        return {s+1, e+1};
    }
};