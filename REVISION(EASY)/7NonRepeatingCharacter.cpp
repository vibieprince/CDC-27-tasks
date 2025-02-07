// Non Repeating Character(geeksforgeeks)
#include<unordered_map>
#include<string>
using namespace std;
class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        unordered_map<char,int> count;
        for(char c:s)
          count[c]++;
        for(char c:s)
          if(count[c]==1)
             return c;
        return '$';
    }
};