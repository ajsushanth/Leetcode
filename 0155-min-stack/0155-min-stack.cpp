class MinStack {
public:
    stack<int> st, minst;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(minst.size() == 0) minst.push(val);
        else if(val <= minst.top()) minst.push(val);
        else minst.push(minst.top());
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
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