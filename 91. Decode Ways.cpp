class Solution {
public:
    int numDecodings(string s) {
       int len=s.length();
        //num[1]對應到s[0]
        vector<int> num(len+1,0);
        if(len==0||s[0]=='0')
            return 0;
            num[0]=1;
            num[1]=1;
            for(int i=2;i<=len;i++){
                //s[i]的數量等於s[i-1]+s[i-2]的數量
                //ex: 226，要decode 6的時候
                //該index>0
                if(s[i-1]>'0')
                    //等於單獨解析6
                    num[i]=num[i-1];
                //該index及前一個index的和在10~26之間
                if(s[i-2]>'0'&&(s[i-2]-'0')*10+s[i-1]-'0'<27)
                    //等於解析成26
                num[i]+=num[i-2];
                //ex:100 00或0這兩種decode都不合理
                //ex:190 90或0這兩種decode都不合理
                if(num[i]==0)
                    return 0;
            }
        return num[len];
    }

};
