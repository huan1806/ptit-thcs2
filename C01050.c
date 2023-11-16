#include <stdio.h>

void printFullLine(int width) {
    for (int i = 0; i < width; i++) {
        printf("*");
    }
    printf("\n");
}

void printFirstLast(int width) {
    printf("*");
    for (int i = 1; i < width - 1; i++) {
        printf(" ");
    }
    printf("*\n");
}

int main() {
    int width, height;
    scanf("%d %d", &width, &height);
    printFullLine(width);
    for (int i = 1; i < height - 1; i++) {
        printFirstLast(width);
    }
    printFullLine(width);
    return 0;
}