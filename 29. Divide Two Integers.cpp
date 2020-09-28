class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign=dividend<0^divisor<0?-1:1;;
        long divid=labs(dividend);
        long divis=labs(divisor);
        //ans=a/b;
        //log(ans)=log(a)-log(b);
        //ans=e^(log(a)-log(b));
        long ans=exp(log(divid)-log(divis));
        if(ans>INT_MAX)
            return sign==1?INT_MAX:INT_MIN;
        return sign*ans;
    }
};
