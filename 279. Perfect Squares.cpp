class Solution {
public:

    int numSquares(int n) {
        int dp[n+1];
        dp[0]=0;
        //�̧ǭp��Xi~n���̤pcount
        for(int i=1;i<=n;i++) {
            dp[i]=INT_MAX;
            for(int j=1;j*j<=i;j++)
                /*dp[i-j*j]+1
                +1�N���Fj^2�Adp[i-j*j]���i-j*j���̤pcount
                */
                dp[i]=min(dp[i],dp[i-j*j]+1);
        }

        return dp[n];


    }
};
