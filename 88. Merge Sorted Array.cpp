class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i=0,j=0;
        for(int index=0; index<m+n; index++)
        {
            //放nums1的條件
            //1. nums1跟nums2都還沒放完，且nums1比較小
            //2. nums2放完了
            if((i<m&&j<n&&nums1[index]<=nums2[j])||j>=n)
                i++;
            //剩下情況就是放nums2
            else
            {
                nums1.pop_back();
                nums1.insert(nums1.begin()+index,nums2[j]);
                j++;
            }

        }
    }
};
