/*
You are given a 0-indexed array nums comprising of n non-negative integers.

In one operation, you must:

Choose an integer i such that 1 <= i < n and nums[i] > 0.
Decrease nums[i] by 1.
Increase nums[i - 1] by 1.
Return the minimum possible value of the maximum integer of nums after performing any number of operations.
*/

#include<bits/stdc++.h>

int minimizeArrayValue(vector<int> & nums){
        long long result = 0;
        long long sum = 0;

        for(int i = 0; i<nums.size();i++){
            sum +=nums[i];

            result = max(result,(sum+i)/(i+1));
        }
        return result;
    }

int main(){
    vector<int> nums = {3,7,1,6};
    minimizeArrayValue(nums);
}