//0が入力されたら終了するプログラム
#include<stdio.h>
int main(void) {
	int input = 1;  //入力用の変数の宣言
	int i = 1;  //データ数のカウンタ

	//0が入力されたらループを抜ける
	while (input != 0) {
		scanf("%d", &input);

		switch (input) {
			//0の入力の場合
			case 0:
				break;
			//0以外の場合
			default:
				printf("Case %d: %d\n", i, input);
				i++;
				break;
		}
	}
	return 0;
}