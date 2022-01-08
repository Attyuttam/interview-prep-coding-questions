#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

class Solution {
public:
    int nextPos(int pos, vector<int> nums,int jumps,bool forward){
       
        int init_pos = pos;
        for(int i=1;i<=jumps;i++){
            if(nums[pos]>0 && forward==false)return -1;
            if(nums[pos]<0 && forward==true)return -1;
                
            if(nums[pos]<0){
                int j=0;
                int inc = abs(nums[pos]);
                while(j<inc){
                    pos--;
                    if(pos<0)pos=nums.size()-1;    
                    j++;
                }  
            }else{
                pos = (pos+nums[pos])%nums.size();
            }
            
            if(pos==init_pos)return -1;
            init_pos = pos;
        }
        return pos;
    }
    bool circularArrayLoop(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sp = i;
            int fp = i;
            
            bool forward = nums[i]>0?true:false;
            
            while(true){
                sp = nextPos(sp,nums,1,forward);
                fp = nextPos(fp,nums,2,forward);
                if(sp==-1 || fp==-1)break;
                if(sp==fp)return true;
            }
        }
        return false;
    }
};

int main(){
	Solution s;
	vector<int> v;
	v.push_back(4);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	
	cout<<s.circularArrayLoop(v);
	
	return 0;
}


