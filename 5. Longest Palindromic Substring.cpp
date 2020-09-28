class Solution {
public:
    string longestPalindrome(string s) {
    int len=s.length();
        if(len<2)
          return s;
        string ans="";
        ans+=s[0];
        int c=1;
        //找回文的中間點並往左右擴張
        for(int mid=0;mid<len;mid++){
            calcPalindrome(mid,mid+1,ans,c,s,len);//偶數回文
            calcPalindrome(mid-1,mid+1,ans,c,s,len);//奇數回文
        }
        return ans;
    }
    void calcPalindrome(int l,int r,string &ans,int &c,string &s,int &len){
        while(l>=0&&r<len&&s[l]==s[r]){
            //若找到一個更長的回文就更新
            if(r-l+1>c){
                ans=s.substr(l,r-l+1);
                c=r-l+1;
            }
            l--;
            r++;
        }
    }
};
