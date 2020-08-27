class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        /*
        以[1,2,3,4,5]舉例
        若買1賣5利潤為最高，但仔細觀察會發現它等同於只要有利潤就賣出
        */
        for(int i=1;i<prices.size();i++)
            if(prices[i]>prices[i-1])
                ans+=prices[i]-prices[i-1];
        return ans;
    }
};
