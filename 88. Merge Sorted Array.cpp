class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i=0,j=0;
        for(int index=0; index<m+n; index++)
        {
            //��nums1������
            //1. nums1��nums2���٨S�񧹡A�Bnums1����p
            //2. nums2�񧹤F
            if((i<m&&j<n&&nums1[index]<=nums2[j])||j>=n)
                i++;
            //�ѤU���p�N�O��nums2
            else
            {
                nums1.pop_back();
                nums1.insert(nums1.begin()+index,nums2[j]);
                j++;
            }

        }
    }
};
