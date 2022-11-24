class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

        int mx_profit = 0, mx_value = 0;
        for(int i = prices.size()-1; i>=0; i--){
            mx_value = max(mx_value, prices[i]);
            mx_profit = max(mx_profit, mx_value-prices[i]);
        }
        return mx_profit;
    }
};
