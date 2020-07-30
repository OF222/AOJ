//入力した2数の大小関係を表示するプログラム
#include<stdio.h>
int main(void) {
	int input1, input2;  //入力用の変数の宣言

	scanf("%d %d", &input1, &input2);  //2数の入力
	//大小関係の表示
	if (input1 < input2) {
		printf("a < b\n");
	}
	else {
		if (input1 > input2) {
			printf("a > b\n");
		}
		else {
			printf("a == b\n");
		}
	}

	return 0;
}
 