class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        if(strs.empty())
            return s;
        //利用string排序是以alphabet順序排序的特性，若頭尾str的字母相同，中間的str的字母也會相同，因此只需要比頭尾就好
        sort(strs.begin(),strs.end());
        for(int i=0;i<strs[0].length();i++){
           if(strs[0][i]==strs.back()[i])
            s+=strs[0][i];
            else
                break;
        }
        return s;
    }
};
