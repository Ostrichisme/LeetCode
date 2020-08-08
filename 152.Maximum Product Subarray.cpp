class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //整體乘積最大
        int finalMax=nums[0];
        int Max=nums[0];
        int Min=nums[0];
        for(int i=1;i<nums.size();i++){
            //遇到負數，Max會變小，Min反而會變大
            if(nums[i]<0){
                swap(Max,Min);
            }
            //考慮將nums[i]加入時，要選用max*nums[i]或是令nums[i]當作局部最大乘積
            Max=max(nums[i],Max*nums[i]);
            Min=min(nums[i],Min*nums[i]);
            finalMax=max(finalMax,Max);
        }
        return finalMax;
    }
};
