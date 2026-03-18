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
            int w;
            for(int i=0;i<n-1;i++){
                if(strs[i][j]!=strs[i+1][j]){
                    same=false;
                    goto exit_loops;
                }else{
                    w=i;
                    same=true;
                }
            }
            exit_loops:
            pref=pref+strs[w][j];
            j++;
        }
        return pref;
    }
};