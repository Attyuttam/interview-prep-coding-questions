#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int i = 0;
        while(i<nums.length){
            if(i!=nums[i]-1){
                if(nums[i]-1<nums.length && nums[nums[i]-1]!=nums[i]){
                    int temp = nums[nums[i]-1];
                    nums[nums[i]-1] = nums[i];
                    nums[i] = temp;
                }else{
                    i++;
                }
            }else{
                i++;
            }
        }
        List<Integer> result = new ArrayList<>();
        for(i=0;i<nums.length;i++){
            //System.out.print(nums[i]+" ");
            if(nums[i]-1!=i){
                result.add(i+1);
            }
        }
        return result;
    }
}
int main(){

	return 0;
}


