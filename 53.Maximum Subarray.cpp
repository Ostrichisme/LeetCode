class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int finalSum=nums[0];
        int partialSum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            //考慮nums[i]被加入時，partialSum+nums[i]比較大還是重新以nums[i]當頭比較大
            partialSum=max(nums[i],partialSum+nums[i]);
            finalSum=max(finalSum,partialSum);
        }
        return finalSum;
    }
};
