// Reverse a stack (geeksforgeeks)
#include<stack>
using namespace std;
class Solution{
public:
    void InsertAtBottom(stack<int> &St,int x){
        if(St.empty()){
            St.push(x);
            return;
        }
        int num = St.top();
        St.pop();
        InsertAtBottom(St,x);
        St.push(num);
    }
    void Reverse(stack<int> &St){
        if(St.empty())
           return;
        int top = St.top();
        St.pop();
        Reverse(St);
        InsertAtBottom(St,top);
    }
};