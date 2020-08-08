class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int> > ans;
        if (nums.size()<3 || nums.back() < 0 || nums.front() > 0)
            return {};
        //fix one number
        for(int i=0; i<nums.size()-2; i++)
        {
            //equal to the previous number
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int fix_num=-nums[i],pt_start=i+1,pt_end=nums.size()-1;
            while(pt_start<pt_end)
            {
                if(nums[pt_start]+nums[pt_end]==fix_num)
                {
                    ans.push_back({nums[i],nums[pt_start],nums[pt_end]});
                    //equal to the next number
                    while(pt_start<pt_end&&nums[pt_start]==nums[pt_start+1])
                        pt_start++;
                    //equal to the previous number
                    while(pt_start<pt_end&&nums[pt_end]==nums[pt_end-1])
                        pt_end--;
                    pt_start++;
                    pt_end--;
                }
                else if(nums[pt_start]+nums[pt_end]<fix_num)
                    pt_start++;
                else
                    pt_end--;
            }
        }
        return ans;

    }
};
