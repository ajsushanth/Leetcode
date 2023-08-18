class Solution {
public:
    int climbStairs(int n) {
       /* int count=0;
        if(n == 0){
            count++;
            return count;
        }
        if(n-1 >= 0) count += climbStairs(n-1);
        if(n-2 >= 0) count += climbStairs(n-2);
        return count;

        if(n==0 || n==1) return 1;
        return climbStairs(n-1) + climbStairs(n-2);
    
    Time Limit Exceeded */
    
        vector<int> dp(n+1, -1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};