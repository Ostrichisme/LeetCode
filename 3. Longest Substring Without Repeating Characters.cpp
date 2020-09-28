class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int ans=0;
        int left=0;
        int right=0;
        set<char> s;
        //sliding window�Aleft�N��window���̥��Aright�N��n�P�_��index
        while(right<str.length()){
            //�Yset�w�g���o��char�A�N�qleft�}�lremove��
            /*ex:
            str=abcb�A set=abc�Aleft=a�Aright=b
            1.��remove��a
            set=bc�Aleft=b
            2.�Aremove��b
            set=c�Aleft=c
            */
            while(s.count(str[right])){
                s.erase(str[left]);
                left++;
            }
                s.insert(str[right]);
                right++;
                ans=max(ans,(int)s.size());
        }
        return ans;
    }

};
