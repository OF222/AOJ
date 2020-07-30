#include<stdio.h>

int main(void) {
	int n, m, l;
	int A[100][100] = { {0} }, B[100][100] = { {0} };
	int C[100][100] = { {0} };
	int i, j, k;

	scanf("%d %d", &n, &m, &l);  //列、行数の入力
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			scanf("%d", &A[i][j]);  //行列Aの入力
		}
	}
	for (i = 0;i < m;i++) {
		for (j = 0;j < l;j++) {
			scanf("%d", &B[i][j]);	
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
		for (j = 0;j < l;j++) {
			printf("%d", C[i][j]);  //Cの表示
		}
	}

	return 0;
}