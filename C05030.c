#include <stdio.h>
#include <stdlib.h>

char **scanPixels(int n, int m) {
    char **pixels = (char **) malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        pixels[i] = (char *) malloc((m + 1) * sizeof(char));
        scanf("%s", pixels[i]);
    }
    return pixels;
}

void countByVerticalAndHorizontal(int n, int m, char *const *pixels, int *c1v, int *c2v, int *c1h, int *c2h) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (pixels[i][j] == '1') {
                c1h[i]++;
                c1v[j]++;
            } else if (pixels[i][j] == '2') {
                c2h[i]++;
                c2v[j]++;
            }
        }
    }
}

void freeMemory(int n, char **pixels, int *c1v, int *c2v, int *c1h, int *c2h) {
    for (int i = 0; i < n; i++) {
        free(pixels[i]);
    }
    free(pixels);
    free(c1v);
    free(c2v);
    free(c1h);
    free(c2h);
}

long long countSatisfiedPixels(int n, int m, char *const *pixels, const int *c1v, const int *c2v, const int *c1h, const int *c2h) {
    long long count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (pixels[i][j] == '1') {
                count += c2v[j] * c2h[i];
            } else if (pixels[i][j] == '2') {
                count += c1v[j] * c1h[i];
            }
        }
    }
    return count;
}

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);

    char **pixels = scanPixels(n, m);

    int *c1v = (int *) calloc(m, sizeof(int)); // count1_vertical
    int *c2v = (int *) calloc(m, sizeof(int)); // count2_vertical
    int *c1h = (int *) calloc(n, sizeof(int)); // count1_horizontal
    int *c2h = (int *) calloc(n, sizeof(int)); // count2_horizontal

    countByVerticalAndHorizontal(n, m, pixels, c1v, c2v, c1h, c2h);

    long long count = countSatisfiedPixels(n, m, pixels, c1v, c2v, c1h, c2h);

    printf("%lld\n", count);

    freeMemory(n, pixels, c1v, c2v, c1h, c2h);
}

int main() {
    int test_num;
    scanf("%d", &test_num);
    while (test_num--) {
        solve();
    }
    return 0;
}