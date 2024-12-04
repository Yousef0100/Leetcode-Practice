class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int> st;
        int n = operations.size();
        for (auto& op : operations) {
            if (op == \C\) {
                sum -= st.top();
                st.pop();
            } else if (op == \D\) {
                sum += st.top() * 2;
                st.push(st.top() * 2);
            } else if (op == \+\) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                sum += a + b;

                st.push(a);
                st.push(b);
                st.push(a + b);
            } else {
                int x = stoi(op);
                sum += x;
                st.push(x);
            }
        }

        return sum;
    }
};