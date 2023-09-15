class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pmin = INT_MAX, profit = 0, promax = 0;
        for(int i=0; i<prices.size(); i++){
            if(pmin > prices[i]){
                pmin = prices[i];
            }
            profit = prices[i] - pmin;
            if(profit > 0){
                promax += profit;
                pmin = INT_MAX;
                i--;
            }
        }
        return promax;
    }
};