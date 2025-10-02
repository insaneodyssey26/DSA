// Not very efficient approach, there is a better approach using binary search.
class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0;
        while(n > 0) {
            row++;
            n -= row;
        }
        if (n == 0) return row;
        else return row - 1;
    }
};