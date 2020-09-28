class Solution {
public:
    int numDecodings(string s) {
       int len=s.length();
        //num[1]������s[0]
        vector<int> num(len+1,0);
        if(len==0||s[0]=='0')
            return 0;
            num[0]=1;
            num[1]=1;
            for(int i=2;i<=len;i++){
                //s[i]���ƶq����s[i-1]+s[i-2]���ƶq
                //ex: 226�A�ndecode 6���ɭ�
                //��index>0
                if(s[i-1]>'0')
                    //�����W�ѪR6
                    num[i]=num[i-1];
                //��index�Ϋe�@��index���M�b10~26����
                if(s[i-2]>'0'&&(s[i-2]-'0')*10+s[i-1]-'0'<27)
                    //����ѪR��26
                num[i]+=num[i-2];
                //ex:100 00��0�o���decode�����X�z
                //ex:190 90��0�o���decode�����X�z
                if(num[i]==0)
                    return 0;
            }
        return num[len];
    }

};
