#define mod 1000000007

class Solution {
public:
    int lenGoodString(int len,vector<int>&dp, int zero,int one){
        if(len == 0) return 1;
        if(len <0) return 0;
        if(dp[len] != -1) return dp[len];

        long long sum = (lenGoodString(len-one,dp,zero,one)+ lenGoodString(len-zero,dp,zero,one))%mod;
        return dp[len] = sum;
    }


    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1,-1);

        int ans = 0;
        for(int len = low; len<=high; len++){
            ans = (ans + lenGoodString(len,dp,zero,one))%mod;
        }
        return ans;
    }
};