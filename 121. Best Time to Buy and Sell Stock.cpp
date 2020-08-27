class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int ans=0,buy=INT_MAX;
        for(int& price:prices){
            //�Y��X�����̧C�ʶR�����٧C�A��s�̧C�ʶR���欰price
            if(price<buy)
                buy=price;
            else if(price-buy>ans)
                ans=price-buy;
        }
        return ans;

    }
};
