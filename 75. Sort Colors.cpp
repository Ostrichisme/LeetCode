class Solution {
public:
    void sortColors(vector<int>& nums) {
        //zero跟two分別代表經過swap後0與2的index
        int zero=-1;
        int two=nums.size();
        int i=0;
        while(i<two){
            //若i==zero+1，表示都是0，沒必要swap
            if(nums[i]==0&&i!=zero+1){
                zero++;
                swap(nums[i],nums[zero]);
            }
            else if(nums[i]==2&&i!=two-1){
                two--;
                swap(nums[i],nums[two]);
            }
            else
                i++;
        }

    }
};
