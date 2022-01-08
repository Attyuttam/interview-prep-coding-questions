#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int> > res;
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            int s = i+1;
            int e = n-1;
            
            int v = -nums[i];
            
            while(s<e){
                if(nums[s]+nums[e]==v){
                    vector<int> res_temp{-v,nums[s],nums[e]};
                    sort(res_temp.begin(),res_temp.end());
                    res.insert(res_temp);
                    s++;
                    e--;
                }else if(nums[s]+nums[e]<v){
                    s++;
                }else if(nums[s]+nums[e]>v){
                    e--;
                }            
            }
        }
        
        vector<vector<int> > final_res;
        for(auto itr: res){
            final_res.push_back(itr);
        }
        return final_res;
    }
};
int main(){
	Solution s;
	vector<int> v{-4,-1,0,3,10};
	s.threeSum(v);
	return 0;
}

