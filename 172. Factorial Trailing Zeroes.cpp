class Solution {
public:
    int trailingZeroes(int n) {
        //每當可以被5的次方整除，就會多一個0
        int ans=0;
        long five=5;
        while(five<=n){
            ans+=n/five;
            five*=5;
        }
        return ans;
    }
};
