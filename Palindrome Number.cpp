#include<string>
class Solution {
public:
    bool isPalindrome(int x) {
        string r;
        string s=to_string(x);
        int N=s.length();
        for(int i=N-1;i>=0;i--)
        {
            r+=s[i];
        }
        if (s==r)
            return true;
        else
            return false;
    }
};
