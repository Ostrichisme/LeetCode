class Solution {
public:
    //初始化str="1"，一路算到n的序列
    string countAndSay(int n) {
        string str="1";
        for(int i=2;i<=n;i++){
            int count=1;
            char c=str[0];
            string temp="";
            //index=str.length()代表\0，是為了算最後一個index用的
            for(int i=1;i<=str.length();i++){
                if(str[i]==c)
                    count++;
                else {
                    temp+=to_string(count)+c;
                    count=1;
                    c=str[i];
                }
            }
            str=temp;
        }
        return str;
    }
};
