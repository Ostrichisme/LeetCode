class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        //rotate(first,middle,end)，指定[first,end)，從middle開始到end的區間要移去first
        ::rotate(nums.begin(),nums.end()-k,nums.end());
    }
};
