//入力した数の約数がある範囲の中にいくつあるかを表示するプログラム
#include<stdio.h>
int main(void) {
	int first, last;  //約数を探す範囲(first～last)
	int x;  //xの約数を上記範囲から探す
	int i, j = 0;  //ループカウンタiと約数のカウント用のjの宣言
	
	scanf("%d %d %d", &first, &last, &x);  //各数を読み込む
	for (i = 1;first <= last;first = first + i) {  //first～lastの数で割り切れるか検証する
		if (x % first == 0) {  //割り切れた場合jを1増やす
			j++;
		}
	}
	printf("%d\n", j);  //約数の数jを表示する
	return 0;
}