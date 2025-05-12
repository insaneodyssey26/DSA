class Solution {
public:
    int maxProfit(vector<int>& p) {
        int bv = INT_MAX, maxProfit = 0;
        for (int i = 0; i < p.size(); i++) {
            bv = min(bv, p[i]);
            maxProfit = max(maxProfit, p[i] - bv);
        }
        return maxProfit;
    }
};
