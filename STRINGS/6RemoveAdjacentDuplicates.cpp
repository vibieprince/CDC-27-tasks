// Recursively remove adjacent duplicates (geeksforgeeks)
#include<iostream>
#include<string>
using namespace std;

// Approach 1 | Testcase Passed (20/1115)
class Solution {
  public:
    string removeUtil(string &s) {
        while(true){
            bool isDone = false;
            for(int i=0;i<s.length();i++){
                if(s[i]==s[i+1]){
                    s.erase(i,2);
                    isDone = true;
                    break;
                }
            }
            if(!isDone)
               break;
        }
        return s;
    }
};

// Approach 2 | Testcase Passed (1115/1115)
class Solution {
  public:
    string removeHelper(string &s){
        string ans;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(i<n-1 && s[i]==s[i+1])
               while(i<n-1 && s[i]==s[i+1]) i++;
            else
               ans.push_back(s[i]);
            i++;
        }
        return ans;
    }
    string removeUtil(string &s) {
        string s1;
        while(s.size()!=s1.size()){
            s1 = s;
            s = removeHelper(s);
        }
        return s;
    }
};