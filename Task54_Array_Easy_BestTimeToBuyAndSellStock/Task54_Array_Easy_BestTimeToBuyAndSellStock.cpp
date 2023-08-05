#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min_index = 0, max_profit = 0;
        for (int i = 1;i < prices.size();i++) {
            if (prices[i] < prices[min_index])
                min_index = i;
            else if (max_profit < prices[i] - prices[min_index])
                max_profit = prices[i] - prices[min_index];
        }
        return max_profit;
    }
};
