#include <stdio.h>
#include <string.h>

int main() {
	char string[101], max[101] = {};
	while (scanf("%s", string) != EOF) {
		if (strlen(string) > strlen(max)) {
			strcpy(max, string);
		}
	}
	printf("%s - %d", max, (int) strlen(max));
	return 0;
}
