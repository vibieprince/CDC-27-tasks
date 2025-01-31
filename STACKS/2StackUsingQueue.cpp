// Implement stack using queue(225)
#include<queue>
using namespace std;
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.size()==0)
           return -1;
        for(int i=0;i<q.size()-1;i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int temp = q.front();
        q.pop();

        return temp;
    }
    
    int top() {
        if(q.size()==0)
           return -1;
        return q.back();
    }
    
    bool empty() {
        if(q.size()==0)
            return true;
        else
           return false;
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