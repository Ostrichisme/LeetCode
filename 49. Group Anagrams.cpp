class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> ans;
        //�����@���A�N�Ҧ��ƧǹL��ۦP��string��i�h
        for(auto &s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            m[temp].push_back(s);
        }
        //�N�Ҧ�map��value(vector<string>)�[�i�hans
        for(auto &index:m)
            ans.push_back(index.second);
        return ans;
    }
};
