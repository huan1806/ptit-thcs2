#include <stdio.h> 
#include <string.h>

int n;
char arr[10][11];

void do_switch(int row, int col) {
	for (int i = 0; i <= row; i++) {
		for (int j = 0; j <= col; j++) {
			if (arr[i][j] == '0') {
				arr[i][j] = '1';
			} else {
				arr[i][j]= '0';
			}
		}
	}
}

void solve() {
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {
			if (arr[i][j] == '1') {
				count++;
				do_switch(i, j);
			}
		}
	}
	printf("%d", count);
}

int main() {
	solve();
	return 0;
}

