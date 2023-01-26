class MinStack {
public:
    
    stack<int> st1;
    stack<int> st2;
    MinStack() {
       
    }
    
    void push(int val) {
        st1.push(val);
        if(st2.empty() || val<=st2.top())
            st2.push(val);
    }
    
    void pop() {
        int t=st1.top();
        st1.pop();
        if(t==st2.top())
            st2.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};
