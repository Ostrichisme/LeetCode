class Solution {
    private:
    string digits;
    vector<string> ans;
public:
    //dfs把所有組合列出來
    vector<string> letterCombinations(string d) {
        if(d=="")
            return {};
        digits=d;
        dfs("",0);
        return ans;

    }
    void dfs(string s,int i){
        if(s.length()==digits.length()) {
            ans.push_back(s);
            return;
        }

        switch(digits[i]){
            case '2':
                dfs(s+"a",i+1);
                dfs(s+"b",i+1);
                dfs(s+"c",i+1);
                break;
            case '3':
                dfs(s+"d",i+1);
                dfs(s+"e",i+1);
                dfs(s+"f",i+1);
                break;
            case '4':
                dfs(s+"g",i+1);
                dfs(s+"h",i+1);
                dfs(s+"i",i+1);
                break;
            case '5':
                dfs(s+"j",i+1);
                dfs(s+"k",i+1);
                dfs(s+"l",i+1);
                break;
            case '6':
                dfs(s+"m",i+1);
                dfs(s+"n",i+1);
                dfs(s+"o",i+1);
                break;
            case '7':
                dfs(s+"p",i+1);
                dfs(s+"q",i+1);
                dfs(s+"r",i+1);
                dfs(s+"s",i+1);
                break;
            case '8':
                dfs(s+"t",i+1);
                dfs(s+"u",i+1);
                dfs(s+"v",i+1);
                break;
            case '9':
                dfs(s+"w",i+1);
                dfs(s+"x",i+1);
                dfs(s+"y",i+1);
                dfs(s+"z",i+1);
                break;
        }

    }
};
