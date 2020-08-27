class Solution {
public:
    double myPow(double x, int n) {
        long nn=n;
        if(nn<0)
            nn=-1*nn;
        double ans=1;
        //O(logn)
        //ex:�N2^6����4^3�ӹB��
        while(nn>0){
            if(nn%2==0){
                x=x*x;
                nn/=2;
            }
            else{
                ans*=x;
                nn--;
            }
        }
        if(n>0)return ans;
        else
            return 1/ans;
    }
};
