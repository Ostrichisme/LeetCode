class Solution {
public:
    int strStr(string haystack, string needle) {
        int n_len=needle.length();
        int h_len=haystack.length();
        if(n_len==0)
            return 0;
        //暴力法，簡單優化:i最多跑到h_len-n_len
        //ex:haystack=aaaaa，needle=bba
        //i最多跑到5-3=2
        for(int i=0;i<=h_len-n_len;i++){
            if(haystack.substr(i,n_len)==needle)
                return i;
        }
        return -1;
    }
};
