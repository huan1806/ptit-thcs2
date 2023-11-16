#include <stdio.h>

struct Student {
    int id;
    char name[100];
    float scores[3];
};

void add(struct Student *students, int *size) {
    int quantity;
    scanf("%d\n", &quantity);
    for (int i = 0; i < quantity; i++) {
        int idx = *size + i;
        students[idx].id = idx + 1;
        scanf("%[^\n]", students[idx].name);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[idx].scores[j]);
        }
        scanf("\n");
    }
    *size += quantity;
    printf("%d\n", quantity);
}

void edit(struct Student *students) {
    int id;
    scanf("%d\n", &id);
    scanf("%[^\n]", students[id - 1].name);
    for (int j = 0; j < 3; j++) {
        scanf("%f", &students[id - 1].scores[j]);
    }
    scanf("\n");
    printf("%d\n", id);
}

int is_in_increasing_order(const float scores[3]) {
    return scores[2] > scores[1] && scores[1] > scores[0];
}

void printResult(struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        if (is_in_increasing_order(students[i].scores)) {
            printf(
                    "%d %s %.1f %.1f %.1f\n",
                    students[i].id,
                    students[i].name,
                    students[i].scores[0],
                    students[i].scores[1],
                    students[i].scores[2]
            );
        }
    }
}

void solve() {
    struct Student students[10000];
    int size = 0;
    int cmd;
    do {
        scanf("%d\n", &cmd);
        switch (cmd) {
            case 1:
                add(students, &size);
                break;
            case 2:
                edit(students);
                break;
            case 3:
                printResult(students, size);
                break;
            default:
                break;
        }
    } while (cmd != 3);
}

int main() {
    solve();
    return 0;
}