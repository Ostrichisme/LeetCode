class Solution {
public:
    bool isPalindrome(string str) {
        //�ǳƨ��string�A�@�ӥ����k�A�@�ӥk����
        string fromLeft;
        string fromRight;
       for(auto &s:str)
           if(isalnum(s))
               fromLeft+=tolower(s);
        fromRight=fromLeft;
        reverse(fromRight.begin(),fromRight.end());
        //�^�媺�ܥN��o���string�|�ۦP
        return fromLeft==fromRight;
    }
};
