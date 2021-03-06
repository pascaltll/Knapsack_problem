//Dinamic Programic method
#include "dp.h"
int dinamic_programing(int W, std::vector<int>& wt, std::vector<int>& profit, int n) {
    std::vector<int> dp (W + 1, 0);

    for (int i = 1; i < n + 1; ++i) {
        for (int w = W; w >= 0; --w) {
            if (wt[i - 1] <= w) {
                dp[w] = std::max(dp[w], dp[w - wt[i - 1]] + profit[i - 1]);
            }    
        }
    }
    return dp[W];
}
