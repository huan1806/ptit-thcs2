#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 60

int digitAt(char *number, int index) {
    return index < strlen(number) ? number[index] - '0' : 0;
}

char *strrev(char *str){
    if (! str || ! *str) {
        return str;
    }
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

int max(int a, int b) {
    return a >= b ? a : b;
}

char *sum(char *a, char *b) {
    int size_a = strlen(a);
    int size_b = strlen(b);
    int size = max(size_a, size_b) + 1;
    char *result = (char *) calloc(size, sizeof(char));
    int carried = 0;
    for (int i = 0; i < size - 1; i++) {
        int temp = digitAt(a, size_a - i - 1) + digitAt(b, size_b - i - 1) + carried;
        if (temp >= 10) {
            carried = 1;
            temp %= 10;
        } else {
            carried = 0;
        }
        result[i] = temp + '0';
    }
    if (carried == 1) {
        result[size - 1] = '1';
    }
    return strrev(result);
}

char *duplicate(char *s) {
    int size = strlen(s);
    char *res = (char *) malloc((2 * size + 1) * sizeof(char));
    strcpy(res, s);
    strcat(res, s);
    return res;
}

void solve() {
    char s[MAX + 1];
    char *temp_sum = (char *) malloc((MAX + 2) * sizeof(char));
    scanf("%s", s);
    char *_double = duplicate(s);
    strcpy(temp_sum, s);
    for (int i = 2; i <= strlen(s); i++) {
        temp_sum = sum(temp_sum, s);
        char *result = strstr(_double, temp_sum);
        if (result == NULL) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int test_num;
    scanf("%d", &test_num);
    while (test_num--) {
        solve();
    }
    return 0;
}
