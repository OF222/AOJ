//割り算の結果を表示するプログラム
#include<stdio.h>
int main(void) {
	int a, b;  //割り算に用いる数

	scanf("%d %d", &a, &b);  //数の読み込み
	printf("%d %d %f", a / b, a % b, (double)a/b);  //割り算（整数）、余り（整数）、割り算（浮動小数点数）

	return 0;
}