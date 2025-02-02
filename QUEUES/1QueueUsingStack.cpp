// Implement Queue using Stack(232)
#include<stack>
using namespace std;
class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    void push(int x) {
        s.push(x);
    }
    int pop() {
        if(s.empty())
            return -1;
        if(s.size()==1){
            int top = s.top();
            s.pop();
            return top;
        }
        int top = s.top();
        s.pop();
        int front = pop();
        s.push(top);
        return front;
    }
    
    int peek() {
        if(s.empty())
            return -1;
        if(s.size()==1)
            return s.top();
        int top = s.top();
        s.pop();
        int front = peek();
        s.push(top);
        return front;   
    }
    
    bool empty() {
        if(s.size()==0)
            return true;
        else
           return false;
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