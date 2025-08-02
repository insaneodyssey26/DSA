class MinStack {
    private:
    stack <int> a;
    stack <int> b;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        a.push(val);
        if (b.empty() || val <= b.top()) {
            b.push(val);
        }
    }
    
    void pop() {
        if (a.top() == b.top()) {
            b.pop();
        }
        a.pop();
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return b.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */