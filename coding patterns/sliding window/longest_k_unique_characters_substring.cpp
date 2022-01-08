//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 //Fine example of dynamic window
 
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        // your code here
        //making the window of size k
        
        unordered_map<char,int> m;
        int i=0;
        int j=0;
        int max_len = INT_MIN;
        
        while(j<s.length()){
            auto it = m.find(s[j]);
            it==m.end()?m[s[j]]=1:it->second++;
            
            //cout<<m.size()<<" "<<i<<" "<<j<<endl;
            if(m.size()<k){
                j++;
                continue;
            }else if(m.size()==k){
                max_len = max(max_len,j-i+1);
            }else if(m.size()>k){
                while(m.size()>k){
                    auto it = m.find(s[i]);
                    if(it!=m.end()){
                        it->second--;
                        if(it->second==0)m.erase(it->first);
                    }
                    i++;
                }
            }
            
            j++;
        }
        return max_len==INT_MIN?-1:max_len;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends
