class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long abs_n = n;
        if (n < 0) {
            abs_n = -abs_n;
            x = 1 / x; 
        }
        while(abs_n > 0){
            if(abs_n % 2 == 1){
                ans = ans * x;
            }
            x = x * x;
            abs_n = abs_n / 2;
        }
        return ans;
    }
};