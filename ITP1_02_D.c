/*
(0,0)を一つの頂点として、x軸、y軸に沿って第一象限に描かれる長方形に対して
中心(x,y)、半径rの円が外部に出ていないかを判定するプログラム
*/
#include<stdio.h>
int main(void) {
	int H, W;  //長方形の辺の長さ（縦:H, 横:W）
	int x, y, r;  //円の中心（x, y）、半径r

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);  //各値の入力
	
	//円が長方形の外部に出ていない場合は"Yes" そうでない場合は"No" を表示
	if ((y - r >= 0) && (y + r <= H) && (x - r >= 0) && (x + r <= W)) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}
 
