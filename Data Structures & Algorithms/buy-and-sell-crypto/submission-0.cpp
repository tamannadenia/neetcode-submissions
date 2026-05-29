class Solution {
public:
    int l=0;
    int r=0;
    int profit=0;
    int max_profit=0;
    int maxProfit(vector<int>& prices) {
        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[i]>=prices[j]){
                    continue;
                }
                else{
                    profit=prices[j]-prices[i];
                    max_profit=max(max_profit,profit);
                }
            }
        }
        return max_profit;
        
    }
};
