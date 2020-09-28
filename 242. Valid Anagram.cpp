class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        if(s.length()!=t.length())
            return false;
        //先建立好key-pair
        for(char &c:s)
            m[c]++;
        for(char &c:t){
            //若出現沒定義過的key或key出現過多次就return false
            if(--m[c]<0)
                return false;
        }
        return true;
    }
};
