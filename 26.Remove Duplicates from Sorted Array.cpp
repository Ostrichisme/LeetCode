class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        auto uniq_return=unique(nums.begin(),nums.end()); // return �h����̫�@��element���U�@�Ӧ�}
        nums.erase(uniq_return,nums.end());
        return nums.size();
    }
};
