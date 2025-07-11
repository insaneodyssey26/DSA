class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, digit = 0;
        for (int num: nums) {
            if(count == 0) {
                digit = num;
            }
            else if(num == digit) {
                count++;
            }
            else {
                count--;
            }
        }
        return digit;
    }
};