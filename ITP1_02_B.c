//入力した3数が小<中<大の順かどうかを判断するプログラム
#include<stdio.h>
int main(void) {
	int input1, input2, input3;  //入力用の変数の宣言
	scanf("%d %d %d", &input1, &input2, &input3);  //数の入力

	if (input1 < input2 && input2 < input3) {  //小<中<大ならば Yes
		printf("Yes\n");
	}
	else {  //小<中<大でないなら No
		printf("No\n");
	}
	return 0;
}
 