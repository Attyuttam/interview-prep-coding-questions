#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
class Solution {
    public int missingNumber(int[] nums) {
        int i = 0;
        
        while(i<nums.length){
            if(i!=nums[i]){
                if(nums[i]>=nums.length){
                    i++;
                }else{
                    int temp = nums[nums[i]];
                    nums[nums[i]] = nums[i];
                    nums[i] = temp;    
                }
            }else{
                i++;
            }
        }
        for(i=0;i<nums.length;i++){
            if(nums[i]!=i)return i;
        }
        return nums.length;
    }
}
int main(){

	return 0;
}


