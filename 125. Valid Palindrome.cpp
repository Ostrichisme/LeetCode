class Solution {
public:
    bool isPalindrome(string str) {
        //準備兩個string，一個左往右，一個右往左
        string fromLeft;
        string fromRight;
       for(auto &s:str)
           if(isalnum(s))
               fromLeft+=tolower(s);
        fromRight=fromLeft;
        reverse(fromRight.begin(),fromRight.end());
        //回文的話代表這兩個string會相同
        return fromLeft==fromRight;
    }
};
