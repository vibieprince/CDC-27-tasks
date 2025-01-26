// Find the index of the first occurence in a string (28)
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t it = haystack.find(needle);
        if(it != string::npos)
           return it;
        else
           return -1;
    }
};