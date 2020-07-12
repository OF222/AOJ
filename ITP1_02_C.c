//入力した数を小<中<大の順に並び変えるプログラム
#include<stdio.h>
int main(void) {
	int input1, input2, input3;  //入力用の変数の宣言
	int small, medium, large;  //並べ替えおよび表示用の変数の宣言

	scanf("%d %d %d", &input1, &input2, &input3);  //数の入力

	//2数を比較して並び替える
	if (input1 < input2) {
		small = input1;
		medium = input2;

		if (input2 < input3) {
			large = input3;
		}
		else {
			if (input1 < input3) {
				medium = input3;
				large = input2;
			}
			else {
				small = input3;
				medium = input1;
				large = input2;
			}
		}
	}
	else {
		small = input2;
		medium = input1;

		if (input1 < input3) {
			large = input3;
		}
		else {
			if (input2 < input3) {
				medium = input3;
				large = input1;
			}
			else {
				small = input3;
				medium = input2;
				large = input1;
			}
		}
	}
	printf("%d %d %d\n", small, medium, large);  //並べ替え多数の表示

	return 0;
}
 