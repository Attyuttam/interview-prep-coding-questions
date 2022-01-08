#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        int sum=0,max_sum=INT_MIN;
        for(int i=0;i<K;i++){
            sum+=Arr[i];
        }
        
        max_sum = max(max_sum,sum);
        
        for(int i=K;i<N;i++){
            sum-=Arr[i-K];
            sum+=Arr[i];
            
            max_sum = max(sum,max_sum);
        }
        return max_sum;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends
