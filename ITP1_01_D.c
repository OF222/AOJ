//入力された秒数を 時間:分:秒 で表示するプログラム
#include<stdio.h>
int main(void) {
	int S;  //秒数入力用の変数の宣言
	scanf("%d", &S);  //秒数の入力
	printf("%d:%d:%d\n", S / 3600, (S % 3600) / 60, (S % 3600) % 60);  //変換した秒数の表示

	return 0;
}
