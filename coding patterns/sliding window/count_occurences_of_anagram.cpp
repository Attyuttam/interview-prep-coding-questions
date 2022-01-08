#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    
	int search(string pat, string txt) {
	    // code here
	    
	    int k = pat.length();
	    
	    unordered_map<char,int> patm;
	    unordered_map<char,int> txtm;
	    
	    for(int i=0;i<k && i<txt.length();i++){
	        auto it1 = patm.find(pat[i]);
	        if(it1!=patm.end()){
	            it1->second++;
	        }else{
	            patm[pat[i]]=1;
	        }
	        
	        auto it2 = txtm.find(txt[i]);
	        if(it2!=txtm.end()){
	            it2->second++;
	        }else{
	            txtm[txt[i]]=1;
	        }
	    }
	    
	    
	    int i=1;
	    int j=k;
	    
	    int count = 0;

	    if(patm==txtm){
	       count++;
	    }
	        
	    while(j<txt.length()){
	        auto it1 = txtm.find(txt[i-1]);
	       
	        it1->second--;
	        if(it1->second==0)txtm.erase(txt[i-1]);
	        
	        auto it2 = txtm.find(txt[j]);
	        if(it2!=txtm.end()){
	            it2->second++;
	        }else{
	            txtm[txt[j]]=1;
	        }
	        
	        if(patm==txtm){
	            count++;
	        }
	        i++;
	        j++;
	    }
	    return count;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
