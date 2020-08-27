class Solution {
public:

    int numSquares(int n) {
        int dp[n+1];
        dp[0]=0;
        //依序計算出i~n的最小count
        for(int i=1;i<=n;i++) {
            dp[i]=INT_MAX;
            for(int j=1;j*j<=i;j++)
                /*dp[i-j*j]+1
                +1代表選了j^2，dp[i-j*j]表示i-j*j的最小count
                */
                dp[i]=min(dp[i],dp[i-j*j]+1);
        }

        return dp[n];


    }
};
