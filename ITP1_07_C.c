//与えられた表の行、列の各合計を加えて再度表示するプログラム
#include<stdio.h>

int main(void) {
	int table[101][101] = { {0} };  //表の入力用の配列の宣言
	int m, n, i, j;

	scanf("%d %d", &m, &n);  //行、列数の指定
	//値の入力
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			scanf("%d", &table[i][j]);
		}
	}
	//和の計算
	for (j = 0;j < n;j++) {
		for (i = 0;i < m;i++) {
			table[m][j] = table[m][j] + table[i][j];
		}
	}
	for (i = 0;i < m + 1;i++) {
		for (j = 0;j < n;j++) {
			table[i][n] = table[i][n] + table[i][j];
		}
	}

	//表の表示
	for (i = 0;i < m + 1;i++) {
		for (j = 0;j < n;j++) {
			printf("%d ", table[i][j]);
		}
		printf("%d", table[i][j]);
		printf("\n");
	}
	
	return 0;
}