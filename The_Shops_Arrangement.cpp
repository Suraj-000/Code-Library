#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int find_ranked_shop_profit(int *profits, int n, int x, int y, int k) {
    int rank_count[n + 1], min_profit = INT_MAX, max_profit = INT_MIN;
    for (int i = x - 1; i <= y - 1; i++) {
        min_profit = profits[i] < min_profit ? profits[i] : min_profit;
        max_profit = profits[i] > max_profit ? profits[i] : max_profit;
    }
    for (int i = 0; i <= n; i++) rank_count[i] = 0;
    for (int i = x - 1; i <= y - 1; i++) rank_count[profits[i] - min_profit]++;
    for (int i = 0, count = 0; i <= max_profit - min_profit; i++) {
        count += rank_count[i];
        if (count >= k) {
            return i + min_profit;
        }
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int profits[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &profits[i]);
        }

        int q;
        scanf("%d", &q);

        for (int i = 0; i < q; i++) {
            int query_type;
            scanf("%d", &query_type);

            if (query_type == 1) {
                int x, k;
                scanf("%d %d", &x, &k);
                profits[x - 1] = k;
            } else if (query_type == 0) {
                int x, y, k;
                scanf("%d %d %d", &x, &y, &k);
                int result = find_ranked_shop_profit(profits, n, x, y, k);
                printf("%d\n", result);
            }
        }
    }
    return 0;
} 