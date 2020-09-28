class Solution
{
private:
    int total;
    vector<string> ans;
public:
    vector<string> generateParenthesis(int n)
    {

        total=n;
        gen("",0,0);

        return ans;
    }
    void gen(string s,int l, int r)
    {
        if(l==total&&r==total)
        {
            ans.push_back(s);
            return;
        }
        //優先放'('，且'('數量最多為total
        if(l<total)
            gen(s+"(",l+1,r);
        //當')'數量比'('少時才可放')'
        if(r<l)
            gen(s+")",l,r+1);
    }
};
