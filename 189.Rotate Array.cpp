class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        //rotate(first,middle,end)�A���w[first,end)�A�qmiddle�}�l��end���϶��n���hfirst
        ::rotate(nums.begin(),nums.end()-k,nums.end());
    }
};
