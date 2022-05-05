class MyStack {
public:
    vector<int> stack;
    
    MyStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
    }
    
    int pop() {
        int out = stack[stack.size()-1];
        stack.erase(stack.begin() + stack.size() - 1);
        return out;
    }
    
    int top() {
        return stack[stack.size()-1];
    }
    
    bool empty() {
        if(stack.size()==0){
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */