class Solution {
public:
    int titleToNumber(string s) {
        //¦Ò26¶i¦ì
        int power=s.length()-1;
        int ans=0;
        for(auto &c:s){
            ans+=pow(26,power)*(c-'A'+1);
            power--;
        }
        return ans;
    }
};
