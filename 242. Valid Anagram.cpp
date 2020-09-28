class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        if(s.length()!=t.length())
            return false;
        //���إߦnkey-pair
        for(char &c:s)
            m[c]++;
        for(char &c:t){
            //�Y�X�{�S�w�q�L��key��key�X�{�L�h���Nreturn false
            if(--m[c]<0)
                return false;
        }
        return true;
    }
};
