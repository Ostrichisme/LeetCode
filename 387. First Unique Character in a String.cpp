class Solution
{
public:
    int firstUniqChar(string s)
    {
        int ch[26]= {0};
        //���N�U�r���X�{�����ƺ�X��
        for(auto &c:s)
            ch[c-'a']++;
        //��Ĥ@���J�즸�Ƭ�1�����Ӧr���A��index�Y������
        for(int i=0; i<s.length(); i++)
            if(ch[s[i]-'a']==1)
                return i;
        return -1;

    }
};
