//長方形の面積、周の長さを出力するプログラム
#include<stdio.h>
int main(void) {
	int vert, hori;  //縦(vert)、横(hori)の入力用の変数の宣言

	scanf("%d %d", &vert, &hori);  //各辺の長さの入力
	printf("%d %d\n", vert * hori, 2 * (vert + hori));  //長方形の面積、周の長さの出力

	return 0;
}
