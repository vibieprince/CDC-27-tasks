// Reverse string II (541)
#include<string>
#include<stack>
using namespace std;
class Solution {
public:
    void reverse(string s,string &ans,int i,int k){
        stack<char> stk;
        for(int j=i;j<i+k && j<s.size();j++)
           stk.push(s[j]);
        while(!stk.empty()){
            char ch = stk.top();
            ans.push_back(ch);
            stk.pop();
        }
    }
    void append(string s,string &ans,int i,int k){
        for(int j=i;j<i+k && j<s.size();j++)
           ans.push_back(s[j]);
    }
    string reverseStr(string s, int k) {
        string ans = "";
        for(int i=0;i<s.size();i+=2*k){
            reverse(s,ans,i,k);
            append(s,ans,i+k,k);
        }
        return ans;
    }
};