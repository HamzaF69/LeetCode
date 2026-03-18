#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int j=0;
        bool same=true;
        string pref="";
        while(same==true){
            for(int i=0;i<n-1;i++){
                if (j >= strs[i].size() || j >= strs[i+1].size()) {
                    return pref;
                }
                if(strs[i][j]!=strs[i+1][j]){
                    return pref;
                }
            }
            pref=pref+strs[0][j];
            j++;
        }
        return pref;
    }
};