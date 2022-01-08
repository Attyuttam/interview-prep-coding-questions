#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

class Solution {
public:
    vector<int> findInterval(vector<int> f, vector<int> s){
        int a1 = f[0];
        int a2 = f[1];
        int b1 = s[0];
        int b2 = s[1];
        vector<int> res;
        
        
        if(a1<=b1 && b1<=a2 && a2<=b2){
            res.push_back(b1);
            res.push_back(a2);
            return res;
        }
        if(b1<=a1 && a1<=b2 && b2<=a2){
            res.push_back(a1);
            res.push_back(b2);
            return res;
        }
        if(a1<=b1 && b1<=b2 && b2<=a2){
            res.push_back(b1);
            res.push_back(b2);
            return res;
        }
        if(b1<=a1 && a1<=a2 && a2<=b2){
            res.push_back(a1);
            res.push_back(a2);
            return res;
        }
        return res;
    }
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i=0,j=0;
        int m = firstList.size();
        int n = secondList.size();
        vector<vector<int> > result;
        while(i<m && j<n){
            vector<int> res = findInterval(firstList[i],secondList[j]);
            if(res.size()!=0)result.push_back(res);
            
            if(firstList[i][1]<secondList[j][1])i++;
            else if(firstList[i][1]>secondList[j][1])j++;
            else{
                i++;
                j++;
            }
        }
        return result;
    }
};


int main(){
	Solution s;
	
	return 0;
}


