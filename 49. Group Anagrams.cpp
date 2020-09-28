class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> ans;
        //先掃一次，將所有排序過後相同的string放進去
        for(auto &s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            m[temp].push_back(s);
        }
        //將所有map的value(vector<string>)加進去ans
        for(auto &index:m)
            ans.push_back(index.second);
        return ans;
    }
};
