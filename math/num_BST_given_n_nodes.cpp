#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

class Solution {
public:
    void findCatalan(vector<int> &c,int v){
        int i=0,j=v-1,val=0;
        while(i<=v-1 && j>=0){
            val+=c[i]*c[j];
            i++;
            j--;
        }
        c[v]=val;
    }
    int numTrees(int n) {
        if(n==0||n==1)return 1;
        vector<int> c(n+1,0);
        c[0]=1;
        c[1]=1;
        for(int i=2;i<=n;i++){
            findCatalan(c,i);    
        }
        return c[n];
    }
};
int main(){
	Solution s;
	int n;
	cin>>n;
	cout<<s.numTrees(n);
	return 0;
}


