#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIMITERS "\r\n"

struct Candidate {
    int idx;
    char name[101], dob[21];
    float score;
};

void solve() {
    int n;
    float highest_score = 0;
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
        if (candidates[i].score > highest_score) {
            highest_score = candidates[i].score;
        }
    }
    for (int i = 0; i < n; i++) {
        if (candidates[i].score == highest_score) {
            printf("%d %s %s %.1f\n", candidates[i].idx, candidates[i].name, candidates[i].dob, candidates[i].score);
        }
    }
}

int main() {
    solve();
    return 0;
}