class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        if(m<n)
            swap(m,n);
        if(n==1)
            return 1;
        double ans=1;
        //用排列組合來解(m+n-2)!/[(m-1)!*(n-1)!]
        for(int i=m+n-2; i>m-1; i--)
        {
            n--;
            ans*=i*1.0/n;

        }
        return round(ans);
    }
    // use dp
    /*
    {

	 int dp[n][m];
     for(int i=0;i<n;i++)
        dp[i][0]=1;
    for(int j=0;j<m;j++)
        dp[0][j]=1;

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            //每格都是由它的上面+左邊那格算出來的
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[n-1][m-1];
    */

}
};
