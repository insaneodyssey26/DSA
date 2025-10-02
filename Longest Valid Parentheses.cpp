class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>stk;
        stk.push(-1);
        int length = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='('){
                stk.push(i);
            }
            else{
                if(stk.size() == 1){
                    stk.top() = i;
                }
                else{
                    stk.pop();
                    length = max(length, i-stk.top());
                }
            }
        }
        return length;
    }
};