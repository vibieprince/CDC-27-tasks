// Strings Rotations of each other (geeksforgeeks)
#include<iostream>
#include<string>
using namespace std;

class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        s1 += s1;
        if(s1.find(s2)!=string::npos)
            return true;
        else
           return false;

        // OR JUST WRITE 
        // return s1.find(s2) != string::npos;
    }
};