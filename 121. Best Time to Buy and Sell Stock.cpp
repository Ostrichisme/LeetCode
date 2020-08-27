class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int ans=0,buy=INT_MAX;
        for(int& price:prices){
            //璝芥基ゑ程潦禦基临穝程潦禦基price
            if(price<buy)
                buy=price;
            else if(price-buy>ans)
                ans=price-buy;
        }
        return ans;

    }
};
