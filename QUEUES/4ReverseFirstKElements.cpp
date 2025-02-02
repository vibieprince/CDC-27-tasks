// Reverse First K elements of a Queue(geeksforgeeks)
#include<deque>
#include<queue>
#include<stack>
using namespace std;

// Approach 1 (using stack)
class Solution
{
    public:
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int> s;
        // Step 1 : Pop first k elements from q and push into stack
        for(int i=0;i<k;i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        // Step 2 : Fetch from stack and push into q
        while(!s.empty()){
            int val = s.top();
            s.pop();
            q.push(val);
        }
        
        // Step 3 : Fetch first (n-k) elements from q and push back
        int i = q.size()-k;
        while(i--){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};

// Approach 2 (using deque)
class Solution
{
    public:
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        deque<int> dq;
        int count = 0;
        while(!q.empty() && count<k){
            dq.push_front(q.front());
            q.pop();
            count++;
        }
        while(!q.empty()){
            dq.push_back(q.front());
            q.pop();
        }
        while(!dq.empty()){
            q.push(dq.front());
            dq.pop_front();
        }
        return q;
    }
};