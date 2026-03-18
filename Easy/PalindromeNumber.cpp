#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int n=str.length();
        for(int i=0;i<n;i++){
            if(str[i]!=str[n-i-1]){
                return false;
            }
        }
        return true;
    }
};