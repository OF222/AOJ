//住居者を表示するプログラム
#include<stdio.h>

int main(void) {
	int n, b, f, r, v;  //入力する情報の数n、棟(b)階(f)部屋(r)住居者の変動(v)
	int i, j, k;
	int resident[4][3][10] = { {0} };
	
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d %d %d %d", &b, &f, &r, &v);  //住居者情報の入力
		resident[b - 1][f - 1][r - 1] = resident[b - 1][f - 1][r - 1] + v;
	}
	
	//1棟の入力
	for (j = 0;j < 3;j++) {
		for (k = 0;k < 10;k++) {
			printf(" %d", resident[0][j][k]);
		}
		printf("\n");
	}
	//2～4棟の入力
	for (i = 1;i < 4;i++) {
		for (k = 0;k < 20;k++) {
			printf("#");
		}
		printf("\n");
		for (j = 0;j < 3;j++) {
			for (k = 0;k < 10;k++) {
				printf(" %d", resident[i][j][k]);
			}
			printf("\n");
		}
	}
	return 0;
}