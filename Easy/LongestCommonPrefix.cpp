#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string> &strs){
        int n = strs.size();
        string pref = "";
        for (int j = 0; j < strs[0].size(); j++){
            char c=strs[0][j];
            for (int i=1;i<n;i++){
                if (j >= strs[i].size() || strs[i][j] != c){
                    return pref;
                }
            }
            pref+=c;
        }
        return pref;
    }
};