// DP approach 
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        const int MOD =1e9+7;
        if(n == 0) return 0;
        if(n ==1) return 1;
        int prev2 =0,prev1 =1;
        int curr;
        for(int i =2; i<=n;i++){
            curr=(prev1+prev2)%MOD;
            prev2 =prev1;
            prev1= curr;
        }
        return curr;
    }
};
