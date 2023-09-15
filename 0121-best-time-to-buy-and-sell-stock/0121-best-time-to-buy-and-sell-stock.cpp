class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pmin=INT_MAX, pmax=INT_MIN;
        for(int i=0; i<prices.size(); i++){
            if(pmin > prices[i]) pmin = prices[i];
            int profit = prices[i] - pmin;
            if(pmax < profit) pmax = profit; 
        }
        return pmax;
    }
};