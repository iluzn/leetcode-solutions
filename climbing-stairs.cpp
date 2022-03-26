// https://leetcode.com/problems/climbing-stairs
class Solution {
public:
    int call(int n,vector<int>& dp){
        if(n==0) return 1;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]= call(n-1,dp)+call(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return call(n,dp);
    }
};
