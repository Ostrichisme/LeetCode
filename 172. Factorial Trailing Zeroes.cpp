class Solution {
public:
    int trailingZeroes(int n) {
        //�C��i�H�Q5������㰣�A�N�|�h�@��0
        int ans=0;
        long five=5;
        while(five<=n){
            ans+=n/five;
            five*=5;
        }
        return ans;
    }
};
