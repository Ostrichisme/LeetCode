class Solution
{
public:
    int mySqrt(int x)
    {
        if(x==0||x==1)
            return x;
        // binary search
        int l=1,r=x/2+1;

        while(l+1<r)
        {
            long m=(l+r)/2;
            if(m*m==x)
                return m;
            else if(m*m>x)
                r=m;
            else
                l=m;
        }
        return l;

    }
};
