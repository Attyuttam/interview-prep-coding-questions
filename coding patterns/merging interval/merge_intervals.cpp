#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
bool sortcol(const vector<int>& v1,const vector<int>& v2 ) {
        return v1[1] < v2[1];
}
class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(),sortcol);

        vector<vector<int>> result;
        stack<vector<int> > s;
        
        for(int i=0;i<n;i++){
            s.push(intervals[i]);
        }
        
        while(!s.empty()){
            vector<int> el1 = s.top();
            s.pop();
            
            if(s.empty()){
                result.push_back(el1);
                break;
            }
            vector<int> el2 = s.top();
            
            vector<int> temp;
            if(el2[1]>=el1[0]){
                if(el2[0]<el1[0]){
                    temp.push_back(el2[0]);
                    temp.push_back(el1[1]);    
                }else if(el2[0]>=el1[0]){
                    temp.push_back(el1[0]);
                    temp.push_back(el1[1]);
                }
                s.pop();
                s.push(temp);
            }else{
                result.push_back(el1);
            }
        }
        return result;
        
    }
};
int main(){

	return 0;
}


