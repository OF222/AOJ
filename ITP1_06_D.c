//行列の積を表示するプログラム
#include<stdio.h>
int main(void) {
	int n, m;
	int A[100][100], B[100][1], C[100][1] = { {0} };
	int i, j;

	scanf("%d %d", &n, &m);  //列、行数の入力
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			scanf("%d", &A[i][j]);  //行列Aの入力
		}
	}
	for (i = 0;i < m;i++) {
		scanf("%d", &B[i][0]);  //行列Bの入力
	}
	
	//行列の積Cの計算
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			C[i][0] = C[i][0] + A[i][j] * B[j][0];
		}
	}
	for (i = 0;i < n;i++) {
		printf("%d\n", C[i][0]);  //Cの表示
	}

	return 0;
}