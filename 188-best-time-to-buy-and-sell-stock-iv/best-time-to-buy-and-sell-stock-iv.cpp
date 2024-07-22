class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if (prices.empty() || k == 0) return 0;

    int n = prices.size();
    
    // If k is greater than or equal to half the length of prices array, we can perform unlimited transactions
    if (k >= n / 2) {
        int maxProfit = 0;
        for (int i = 1; i < n; ++i) {
            if (prices[i] > prices[i-1]) {
                maxProfit += prices[i] - prices[i-1];
            }
        }
        return maxProfit;
    }

    // Initialize buy and sell arrays
    vector<int> buy(k + 1, -numeric_limits<int>::max());
    vector<int> sell(k + 1, 0);

    for (int price : prices) {
        for (int i = 1; i <= k; ++i) {
            buy[i] = max(buy[i], sell[i-1] - price);
            sell[i] = max(sell[i], buy[i] + price);
        }
    }

    return sell[k];
    }
};