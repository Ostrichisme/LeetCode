class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       //�ϥ�unordered_map�A�]�������Ƨ�
      unordered_map<int,int> m;
        for(auto& num:nums){
            m[num]++;
            if(m[num]>1)
                return true;
        }
        return false;
    }
};
