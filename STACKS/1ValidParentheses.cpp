// Valid Parentheses(20)
#include<iostream>
#include<stack>
using namespace std;
class Solution{
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
              stk.push(s[i]);
            else{
                if(!stk.empty()){
                    if((s[i]==')' && stk.top()=='(') || (s[i]=='}' && stk.top()=='{') || (s[i]==']' && stk.top()=='['))
                   stk.pop();
                else
                   return false;
                }
                else 
                   return false;
            }
        }
        if(!stk.empty())
            return false;
        return true;
    }    
};