#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
void travZigZag(vector<vector<int> > arr,int r,int c ){

	int i = 0;
	int j = 0;
	
	bool goDown = false;
	
	while(i<r && j<c){
		if(goDown){
			while(i<r && j>=0){
				cout<<arr[i][j]<<" ";
				i++;
				j--;
			}
			goDown = !goDown;
			j++;
			i--;
			if(i==r-1){
				j++;
			}else{
				i++;
			}
		}else{
			while(i>=0 && j<c){
				cout<<arr[i][j]<<" ";
				i--;
				j++;
			}
			goDown = !goDown;
			j--;
			i++;
			if(j==c-1){
				i++;
			}else{
				j++;
			}
		}
		
	}
}
void print(vector<vector<int> > arr,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n--------------------\n";
}
int main(){
	
	int r,c;
	cin>>r>>c;
	vector<vector<int> > arr(r,vector<int>(c,0));
	int v = 1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			arr[i][j] = v++;
		}
	}
	print(arr,r,c);
	travZigZag(arr,r,c);
	return 0;
}


