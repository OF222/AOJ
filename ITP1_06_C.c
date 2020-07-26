#include<stdio.h>

int main(void) {
	int n, b, f, r, v;
	int i, j, k;
	int resident[4][3][10] = { {0} };
	
	scnaf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d %d %d %d", &b, &f, &r, &v);
		resident[b - 1][f - 1][r - 1] = resident[b - 1][f - 1][r - 1] + v;
	}
	
	for (j = 0;j < 3;j++) {
		for (k = 0;k < 10;k++) {
			printf("%d", resident[0][j][k]);
		}
		printf("\n");
	}
	for (i = 1;i < 4;i++) {
		for (k = 0;k < 20;k++) {
			printf("#");
		}
		printf("\n");
		for (j = 0;j < 3;j++) {
			for (k = 0;k < 10;k++) {
				printf("%d", resident[i][j][k]);
			}
			printf("\n");
		}
	}
	return 0;
}