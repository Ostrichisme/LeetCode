class Solution {
public:
    int titleToNumber(string s) {
        //��26�i��
        int power=s.length()-1;
        int ans=0;
        for(auto &c:s){
            ans+=pow(26,power)*(c-'A'+1);
            power--;
        }
        return ans;
    }
};
