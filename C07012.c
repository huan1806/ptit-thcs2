#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product {
    int idx;
    char name[100], group[100];
    float purchasePrice, sellingPrice, profit;
};

int compare(const void *e1, const void *e2) {
    struct product *product1 = (struct product *) e1;
    struct product *product2 = (struct product *) e2;
    if (product1->profit == product2->profit) {
        return 0;
    } else if (product1->profit > product2->profit) {
        return -1;
    }
    return 1;
}

void printResult(struct product *products, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d %s %s %.2lf\n", products[i].idx, products[i].name, products[i].group, products[i].profit);
    }
}

void solve() {
    int n;
    scanf("%d\n", &n);
    struct product *products = (struct product *) malloc(n * sizeof(struct product));
    for (int i = 0; i < n; i++) {
        products[i].idx = i + 1;
        fgets(products[i].name, 100, stdin);
        strtok(products[i].name, "\r\n");
        fgets(products[i].group, 100, stdin);
        strtok(products[i].group, "\r\n");
        scanf("%f %f\n", &products[i].purchasePrice, &products[i].sellingPrice);
        products[i].profit = products[i].sellingPrice - products[i].purchasePrice;
    }
    qsort(products, n, sizeof(struct product), compare);
    printResult(products, n);
}

int main() {
    solve();
    return 0;
}