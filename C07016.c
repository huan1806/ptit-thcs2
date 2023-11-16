#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIMITERS "\r\n"

struct Candidate {
    int idx;
    char name[101], dob[21];
    float score;
};

int compare(const void *e1, const void *e2) {
    struct Candidate *candidate1 = (struct Candidate *) e1;
    struct Candidate *candidate2 = (struct Candidate *) e2;
    if (candidate1->score == candidate2->score) {
        return 0;
    } else if (candidate1->score < candidate2->score) {
        return 1;
    }
    return -1;
}

void solve() {
    int n;
    scanf("%d\n", &n);
    struct Candidate *candidates = (struct Candidate *) malloc(n * sizeof(struct Candidate));
    for (int i = 0; i < n; i++) {
        candidates[i].idx = i + 1;
        fgets(candidates[i].name, 100, stdin);
        strtok(candidates[i].name, DELIMITERS);
        fgets(candidates[i].dob, 100, stdin);
        strtok(candidates[i].dob, DELIMITERS);
        candidates[i].score = 0;
        for (int j = 1; j <= 3; j++) {
            float score;
            scanf("%f\n", &score);
            candidates[i].score += score;
        }
    }
    qsort(candidates, n, sizeof(struct Candidate), compare);
    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.1f\n", candidates[i].idx, candidates[i].name, candidates[i].dob, candidates[i].score);
    }
}

int main() {
    solve();
    return 0;
}