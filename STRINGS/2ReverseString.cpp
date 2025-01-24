// Reverse String (344)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Approach 1 (using two pointers)
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0,e=s.size()-1;
        while(st<e)
          swap(s[st++],s[e--]);
    }
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> stk;
        for(char i : s)
          stk.push(i);
        s.clear();
        while(!stk.empty()){
            char ch = stk.top();
            s.push_back(ch);
            stk.pop();
        }
    }
};