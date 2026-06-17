class MinStack {
public:
    stack<pair<int, int>> st;
    int minimum = INT_MAX;

    MinStack() {
    }

    void push(int val) {
        if (st.empty())
            minimum = val;
        else
            minimum = min(st.top().second, val);

        st.push({val, minimum});
    }

    void pop() {
        if (!st.empty())
            st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */