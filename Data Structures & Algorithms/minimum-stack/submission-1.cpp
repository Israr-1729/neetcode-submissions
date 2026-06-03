class MinStack {
public:
    stack<int> minst;
    stack<int> st;
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        if(minst.size() == 0)
        minst.push(val);

        else if(minst.size() != 0 && val<=minst.top())
        minst.push(val);
    }
    
    void pop() {
        if(minst.size() != 0 && st.top()==minst.top())
        minst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
