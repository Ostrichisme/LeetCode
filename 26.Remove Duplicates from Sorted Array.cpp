class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        auto uniq_return=unique(nums.begin(),nums.end()); // return 去重後最後一個element的下一個位址
        nums.erase(uniq_return,nums.end());
        return nums.size();
    }
};
