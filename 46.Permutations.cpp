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
    //index�N��ǦC���Y�O�ĴX�Ӧ�m
    void dfs(vector<int>& nums,int index)
    {
        if(index==s)
            ans.push_back(nums);
        for(int i=index; i<s; i++)
        {
            //�C�ӼƦr���|��ǦC���Ĥ@�ӼƦr�A�ҥH�|��swap
            swap(nums[index],nums[i]);
            //�T�w�n��index�Ӧ�m���Ʀr�O�h�֡A���۳B�z��index+1�Ӧ�m�}�l���l�ǦC�ƦC
            dfs(nums,index+1);
            //�A�洫�@���^��쥻���ƦC���A
            swap(nums[index],nums[i]);
        }
    }


};
