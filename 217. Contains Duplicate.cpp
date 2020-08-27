class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       //使用unordered_map，因為不須排序
      unordered_map<int,int> m;
        for(auto& num:nums){
            m[num]++;
            if(m[num]>1)
                return true;
        }
        return false;
    }
};
