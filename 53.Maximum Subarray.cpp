class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int finalSum=nums[0];
        int partialSum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            //�Ҽ{nums[i]�Q�[�J�ɡApartialSum+nums[i]����j�٬O���s�Hnums[i]���Y����j
            partialSum=max(nums[i],partialSum+nums[i]);
            finalSum=max(finalSum,partialSum);
        }
        return finalSum;
    }
};
