#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int p=0;p<n;p++){
		int val;
		cin>>val;
		v.push_back(val);
	}
	int i=0;
	while(i<v.size()){
		if(v[i]-1!=i){
			int temp = v[v[i]-1];
			v[v[i]-1] = v[i];
			v[i] = temp;
			continue;
		}
		i++;
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}


