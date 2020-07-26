//長方形を描写するプログラム
#include<stdio.h>
int main(void) {
	int i, j;
	int H, W;  //縦、横の入力に用いる変数

	scanf("%d %d", &H, &W);  //縦、横の入力
	while ((H != 0) && (W != 0)) {  //H,Wともに0まで繰り返す
		for (i = 0;i < H;i++) {
			for (j = 0;((i == 0) || (i == H-1))&&(j < W);j++) {  //最初と最後の行の描写
				printf("#");
			}
			if ((i != 0) && (i != H - 1)) {  //最初と最後以外の行の描写
				printf("#");
				for (j = 1;j < W - 1;j++) {
					printf(".");
				}
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
		scanf("%d %d", &H, &W);  //縦、横の入力
	}

	return 0;
}