class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int nonZeroIndex=0; //紀錄下次遇到非0的數字時要塞進哪個index
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[nonZeroIndex]=nums[i];
            nonZeroIndex++;
        }
    }
    //剩下的補0
    for(int i=nonZeroIndex;i<nums.size();i++)
        nums[i]=0;
    }
};


