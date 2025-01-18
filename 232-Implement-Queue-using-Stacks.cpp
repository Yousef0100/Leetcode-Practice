class MyQueue {
public:
    stack<int> stk;
    
    MyQueue() {

    }
    
    void push(int x) {
        stk.push(x);
    }
    
    int pop() {
        stack<int> tmp;
        while (stk.size() > 1) {
            tmp.push (stk.top());
            stk.pop();
        }
        
        int val = stk.top();
        stk.pop();

        while (!tmp.empty()) {
            stk.push (tmp.top());
            tmp.pop();
        }

        return val;
    }
    
    int peek() {
        stack<int> tmp;
        while (stk.size() > 1) {
            tmp.push (stk.top());
            stk.pop();
        }
        
        int val = stk.top();

        while (!tmp.empty()) {
            stk.push (tmp.top());
            tmp.pop();
        }

        return val;
    }
    
    bool empty() {
        return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */