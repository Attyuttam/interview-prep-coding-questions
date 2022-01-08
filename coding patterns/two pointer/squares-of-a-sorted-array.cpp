#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        vector<int> res;
        
        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                res.push_back(nums[i]*nums[i]);
                i++;
            }else{
                res.push_back(nums[j]*nums[j]);
                j--;
            }
    
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

int main(){
	Solution s;
	vector<int> v{-4,-1,0,3,10};
	s.sortedSquares(v);
	return 0;
}


