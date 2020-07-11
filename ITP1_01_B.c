//入力した数の三乗を出力するプログラム
#include<stdio.h>
int main(viod) {
	int input = 0;  //入力用の変数の宣言
	scanf("%d", &input);  //数の入力
	printf("%d\n", input * input * input);  //三乗した数の出力

	return 0;
}
