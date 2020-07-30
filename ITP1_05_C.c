//チェック柄の長方形を描写するプログラム
#include<stdio.h>

int main(void) {
	int i, j;
	int H, W;  //たて(H),よこ(W)

	scanf("%d %d", &H, &W);  //たて,よこの入力
	while ((H != 0) && (W != 0)) {
		for (i = 0;i < (H / 2);i++) {
			//2行ずつ描写する
			for (j = 0;j < (W / 2);j++) {
				printf("#.");
			}
			if (W % 2 == 1) {  //よこが奇数のとき
				printf("#");
			}
			printf("\n");
			for (j = 0;j < (W / 2);j++) {
				printf(".#");
			}
			if (W % 2 == 1) {  //よこが奇数のとき
				printf(".");
			}
			printf("\n");
		
		}
		if (H % 2 == 1) {  //たてが奇数のとき
			for (j = 0;j < (W / 2);j++) {
				printf("#.");
			}
			if (W % 2 == 1) {  //よこが奇数のとき
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
		scanf("%d %d", &H, &W);  //たて.よこの入力
	}
	return 0;
}