class Solution
{
public:
    int firstUniqChar(string s)
    {
        int ch[26]= {0};
        //先將各字母出現的次數算出來
        for(auto &c:s)
            ch[c-'a']++;
        //當第一次遇到次數為1的那個字母，其index即為答案
        for(int i=0; i<s.length(); i++)
            if(ch[s[i]-'a']==1)
                return i;
        return -1;

    }
};
