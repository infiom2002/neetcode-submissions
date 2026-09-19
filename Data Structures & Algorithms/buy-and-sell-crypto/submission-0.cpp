class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=INT_MIN;
        int curr_profit=INT_MAX;
        int curr_price=0;

        for(int i=0;i<prices.size();i++)
        {
            curr_profit=min(curr_profit,prices[i]);
            curr_price=prices[i]-curr_profit;
            profit=max(profit,curr_price);
        }

        return profit;

    }
};
