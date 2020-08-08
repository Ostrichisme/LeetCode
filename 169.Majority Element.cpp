class Solution {
public:
    //摩爾投票演算法
    //每次從陣列中找出一對不同的元素，將它們從陣列中刪除，直到遍歷完整個陣列。
    //由於這道題已經說明一定存在一個出現次數超過一半的元素，所以遍歷完陣列後陣列中一定會存在至少一個元素。
    int majorityElement(vector<int>& nums) {
    int ans=nums[0],count=1;
      for(int i=1;i<nums.size();i++) {
            if(ans==nums[i])
                count++;
            else {
                count--;
                if(count==0){
                    count=1;
                    ans=nums[i];
                }
            }
      }
      return ans;
    }
};
