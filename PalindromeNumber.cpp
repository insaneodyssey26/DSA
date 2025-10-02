class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0, dig, temp = x;
        while(x>0){
            if(rev >= INT_MAX/10) return false;
            dig = x % 10;
            x = x / 10;
            rev = rev * 10 + dig;
        }
        return (temp == rev);
    }
};
