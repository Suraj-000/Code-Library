#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

void build_segment_tree(int* tree, int* shop_prices, int index, int left, int right) {
    if (left == right) {
        tree[index] = shop_prices[left];
        return;
    }

    int mid = (left + right) / 2;
    build_segment_tree(tree, shop_prices, 2 * index + 1, left, mid);
    build_segment_tree(tree, shop_prices, 2 * index + 2, mid + 1, right);

    tree[index] = (tree[2 * index + 1] < tree[2 * index + 2]) ? tree[2 * index + 1] : tree[2 * index + 2];
}

int query_segment_tree(int* tree, int index, int left, int right, int l, int r) {
    if (l <= left && right <= r) {
        return tree[index];
    }
    if (r < left || l > right) {
        return INT_MAX;
    }

    int mid = (left + right) / 2;
    int left_query = query_segment_tree(tree, 2 * index + 1, left, mid, l, r);
    int right_query = query_segment_tree(tree, 2 * index + 2, mid + 1, right, l, r);

    return (left_query < right_query) ? left_query : right_query;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int* shop_prices = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; ++i) {
        scanf("%d", &shop_prices[i]);
    }

    int tree_size = 2 * pow(2, ceil(log2(N))) - 1;
    int* segment_tree = (int*)malloc(tree_size * sizeof(int));
    for (int i = 0; i < tree_size; ++i) {
        segment_tree[i] = INT_MAX;
    }
    build_segment_tree(segment_tree, shop_prices, 0, 0, N - 1);

    for (int query = 0; query < M; ++query) {
        int l, r;
        scanf("%d %d", &l, &r);

        int min_price = query_segment_tree(segment_tree, 0, 0, N - 1, l, r);
        printf("%d\n", min_price);
    }

    free(shop_prices);
    free(segment_tree);
    return 0;
}