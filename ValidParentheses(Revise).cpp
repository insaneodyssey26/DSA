class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch: s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;

                char topElement = st.top();

                if ((ch == ')' && topElement == '(') ||
                    (ch == '}' && topElement == '{') ||
                    (ch == ']' && topElement == '[')) {
                        st.pop();
                } else {
                    return false;
                }              
            }
        }
        return st.empty();
    }
};