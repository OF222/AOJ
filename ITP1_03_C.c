//入力された2数を小さい順に並び替えて表示するプログラム
#include<stdio.h>
int main(void) {
	int input1, input2;  //入力用の変数の宣言
	
	//breakまで無限にループする
	while (1) {
		scanf("%d %d", &input1, &input2);
		//どちらの数も0の時にループを抜ける
		if (input1 == 0 && input2 == 0)
			break;
		//2数を小さい順に並べ替えて表示する
		if (input1 < input2) {
			printf("%d %d\n", input1, input2);
		}
		else {
			printf("%d %d\n", input2, input1);
		}
	}
	return 0;
}