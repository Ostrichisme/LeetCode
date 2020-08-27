class Solution {
public:
    bool isHappy(int n) {
        int temp;
        //暴力解，只有1跟7才會是true
        while(n>=10){
            int temp=n;
            n=0;
            for(auto c:to_string(temp))
                n+=(c-48)*(c-48);
        }
        if(n==1||n==7)
            return true;
        else
            return false;

    }
};
