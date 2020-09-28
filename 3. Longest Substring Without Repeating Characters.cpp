class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int ans=0;
        int left=0;
        int right=0;
        set<char> s;
        //sliding window，left代表window的最左，right代表要判斷的index
        while(right<str.length()){
            //若set已經有這個char，就從left開始remove掉
            /*ex:
            str=abcb， set=abc，left=a，right=b
            1.先remove掉a
            set=bc，left=b
            2.再remove掉b
            set=c，left=c
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
