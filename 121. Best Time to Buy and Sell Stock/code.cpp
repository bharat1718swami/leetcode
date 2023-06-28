//6-6-22

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
        
    /*    int profit=0;
    
        
        for(int i=0;i<prices.size();i++){
            
            for(int j=i;j<prices.size();j++){
                
               int diff=prices[j]-prices[i];
                
                if(diff>=profit){
                    profit=diff;
                }
                
            }
        }                                 
        return profit;          
    }
};                    */
