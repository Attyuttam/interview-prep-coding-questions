#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length()-1;
        int j = t.length()-1;
        
        while(i>=0 || j>=0){
            int s_skip = 0;
            int t_skip = 0;
            
            while(i>=0){
                if(s[i]=='#'){
                    i--;
                    s_skip++;
                }else if(s_skip>0){
                    s_skip--;
                    i--;
                }else{
                    break;
                }
            }
            while(j>=0){
                if(t[j]=='#'){
                    j--;
                    t_skip++;
                }else if(t_skip>0){
                    t_skip--;
                    j--;
                }else{
                    break;
                }
            }
            
            if(i>=0 && j>=0 && s[i]!=t[j])return false;
            if((i>=0)!=(j>=0))return false;
            
            i--;
            j--;
        }
        return true;
    }
};
int main(){

	return 0;
}


