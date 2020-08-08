class Solution
{
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int> > ans;
        vector<int> empty;
        recur(0, empty,ans,nums);
        return ans;
    }
    void recur(int index,vector<int>& temp, vector<vector<int> >& ans,vector<int>& nums)
    {
        if(index==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);//¿ï
        recur(index+1,temp,ans,nums);
        temp.pop_back();//¤£¿ï
        recur(index+1,temp,ans,nums);
    }

};
