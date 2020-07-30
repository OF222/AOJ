//足りないカードを表示するプログラム
#include<stdio.h>

int main(void) {
	int n;  //最初に持っているトランプの枚数
	char design;  //持っているトランプの絵柄を入力するための変数
	int num;  //持っているトランプの数を入力するための変数
	int number[4][13] = { {0} };  //トランプの総数分の配列
	int i, j;

	scanf("%d", &n);  //持っている枚数を読み込む
	scanf("%c", &design);  //改行を読み込む
	for (i = 0;i < n;i++) {
		//絵柄ごとに場合分けして、持っているトランプを区別する
		scanf("%c %d", &design, &num);
		if (design == 'S') {
			number[0][num-1] = 1;
		}
		else if (design == 'H') {
			number[1][num-1] = 1;
		}
		else if (design == 'C') {
			number[2][num-1] = 1;
		}
		else {
			number[3][num-1] = 1;
		}
		scanf("%c", &design);  //改行を読み込む
	}
	//持っていないトランプを表示する
	for (i = 0;i < 4;i++) {
		for (j = 0;j < 13;j++) {
			if ((number[i][j] != 1)&&(i == 0)) {
				printf("%c %d\n", 'S', j + 1);
			}else if ((number[i][j] != 1)&&(i == 1)) {
				printf("%c %d\n", 'H', j + 1);
			}else if ((number[i][j] != 1)&&(i == 2)) {
				printf("%c %d\n", 'C', j + 1);
			}else if ((number[i][j] != 1)&&(i == 3)) {
				printf("%c %d\n", 'D', j + 1);
			}
		}
	}
	return 0;
}
