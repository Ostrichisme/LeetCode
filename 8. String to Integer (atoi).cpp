class Solution {
public:
    //¯Âºé¼É¤O¸Ñ
    int myAtoi(string str) {
        bool flag=false;
        bool neg;
        long ans=0;
        for(char &c:str){
            if(!flag){
                if(c=='+'||c=='-'||isdigit(c)){
                    flag=true;
                    neg=(c=='-');
                    if(isdigit(c))
                        ans=c-'0';
                }
                else if(c!=' ')
                        return 0;
            }
            else if(isdigit(c)){
                ans=ans*10+c-'0';
                if(ans>INT_MAX)
                    return neg?INT_MIN:INT_MAX;
            }
            else
                break;
        }
        return neg?-1*ans:ans;
    }
};
