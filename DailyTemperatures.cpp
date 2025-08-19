class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> answer(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temp[i] > temp [st.top()]) {
                int top_element = st.top();
                st.pop();
                answer [top_element] = i - top_element;
            }
            st.push(i);
        }
        return answer;
    }
};
