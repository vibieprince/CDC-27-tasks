// Check if One String Swap Can Make Strings Equal(1790)
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> diff;
        int count = 0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                count++;
                if(count>2)
                   return false;
                diff.push_back(i);
            }
        }
        if(count==0)
            return true;
        if(count!=2)
           return false;
        return (s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]]);
    }
};