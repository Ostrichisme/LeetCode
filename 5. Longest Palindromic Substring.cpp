class Solution {
public:
    string longestPalindrome(string s) {
    int len=s.length();
        if(len<2)
          return s;
        string ans="";
        ans+=s[0];
        int c=1;
        //��^�媺�����I�é����k�X�i
        for(int mid=0;mid<len;mid++){
            calcPalindrome(mid,mid+1,ans,c,s,len);//���Ʀ^��
            calcPalindrome(mid-1,mid+1,ans,c,s,len);//�_�Ʀ^��
        }
        return ans;
    }
    void calcPalindrome(int l,int r,string &ans,int &c,string &s,int &len){
        while(l>=0&&r<len&&s[l]==s[r]){
            //�Y���@�ӧ�����^��N��s
            if(r-l+1>c){
                ans=s.substr(l,r-l+1);
                c=r-l+1;
            }
            l--;
            r++;
        }
    }
};
