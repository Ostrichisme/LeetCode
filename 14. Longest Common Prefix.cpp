class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        if(strs.empty())
            return s;
        //�Q��string�ƧǬO�Halphabet���ǱƧǪ��S�ʡA�Y�Y��str���r���ۦP�A������str���r���]�|�ۦP�A�]���u�ݭn���Y���N�n
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
