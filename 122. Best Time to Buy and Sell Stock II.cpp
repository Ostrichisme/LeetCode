class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        /*
        �H[1,2,3,4,5]�|��
        �Y�R1��5�Q���̰��A���J���[��|�o�{�����P��u�n���Q��N��X
        */
        for(int i=1;i<prices.size();i++)
            if(prices[i]>prices[i-1])
                ans+=prices[i]-prices[i-1];
        return ans;
    }
};
