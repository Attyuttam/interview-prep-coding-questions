#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && i>0){
                s.erase(s.begin()+i);
                s.erase(s.begin()+(i-1));
                i-=2;
            } else if(s[i]=='#' && i==0){
                s.erase(s.begin()+i);
                i-=1;
            }         
        }
        for(int i=0;i<t.length();i++){
            //cout<<t[i]<<endl;

            if(t[i]=='#' && i>0){
                t.erase(t.begin()+i);
                t.erase(t.begin()+(i-1));
                i-=2;
            }else if(t[i]=='#' && i==0){
                t.erase(t.begin()+i);
                i-=1;
            }          
        }
        cout<<s<<" "<<t<<endl;
        return s==t;
    }
};

int main(){
	Solution s;
	cout<<s.backspaceCompare("a#bc#","abc###");
	return 0;
}


