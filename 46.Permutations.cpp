class Solution
{
public:
    int s;
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums)
    {
        s=nums.size();
        dfs(nums,0);
        return ans;
    }
    //index代表序列的頭是第幾個位置
    void dfs(vector<int>& nums,int index)
    {
        if(index==s)
            ans.push_back(nums);
        for(int i=index; i<s; i++)
        {
            //每個數字都會當序列的第一個數字，所以會做swap
            swap(nums[index],nums[i]);
            //固定好第index個位置的數字是多少，接著處理第index+1個位置開始的子序列排列
            dfs(nums,index+1);
            //再交換一次回到原本的排列狀態
            swap(nums[index],nums[i]);
        }
    }


};
