class Solution {
public:
    //��l��str="1"�A�@�����n���ǦC
    string countAndSay(int n) {
        string str="1";
        for(int i=2;i<=n;i++){
            int count=1;
            char c=str[0];
            string temp="";
            //index=str.length()�N��\0�A�O���F��̫�@��index�Ϊ�
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
