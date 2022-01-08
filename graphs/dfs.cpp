#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

void print(vector<int> adj[],int v){
	for(int i=0;i<v;i++){
		cout<<i<<"->";
		for(int j=0;j<adj[i].size();j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
}
void printVec(vector<int> res){
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
}
void dfs(vector<int> adj[],int v,vector<int>&vis,int sp){
	stack<int> s;
	vector<int> res;
	
	vis[sp] = 1;
	s.push(sp);
	
	while(!s.empty()){
		int curr = s.top();
		vis[curr]=1;
		res.push_back(curr);
		s.pop();
		
		for(int i=0;i<adj[curr].size();i++){
			if(vis[adj[curr][i]]==0){
				s.push(adj[curr][i]);
			}
		}
	}
	printVec(res);
}

int main(){
	int v,e;
	
	cin>>v;
	vector<int> adj[v];
	cin>>e;
	
	for(int i=0;i<e;i++){
		int v1,v2;
		cin>>v1>>v2;
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
	}
	
	print(adj,v);
	
	vector<int> vis(v,0);
	
	for(int i=0;i<v;i++){
		if(vis[i]==0)dfs(adj,v,vis,i);	
	}
	
	return 0;
}


