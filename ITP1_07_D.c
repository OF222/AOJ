//行列の積を表示するプログラム
#include<stdio.h>

int main(void) {
	int n, m, l;
	long int A[100][100], B[100][100];  //行列A,Bの宣言
	long int C[100][100] = { {0} };  //A,Bの積に用いる行列の宣言
	int i, j, k;

	scanf("%ld %ld %ld", &n, &m, &l);  //列、行数の入力
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			scanf("%ld", &A[i][j]);  //行列Aの入力
		}
	}
	for (i = 0;i < m;i++) {
		for (j = 0;j < l;j++) {
			scanf("%ld", &B[i][j]);	  //行列Bの入力
		}
	}
	//行列の積Cの計算
	for (i = 0;i < n;i++) {
		for (k = 0;k < l;k++) {
			for (j = 0;j < m;j++) {
				C[i][k] = C[i][k] + A[i][j] * B[j][k];
			}
		}
	}
	for (i = 0;i < n;i++) {
		printf("%ld", C[i][0]);
		for (j = 1;j < l;j++) {
			printf(" %ld", C[i][j]);  //Cの表示
		}
		printf("\n");
	}

	return 0;
}