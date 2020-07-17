//0が入力されたら終了するプログラム
#include<stdio.h>
int main(void) {
	int input[10000] = { 0 };
	int i = 0;

	scanf("%d", &input[i]);
	i++;
	while (input[i-1]!=0) {
		scanf("%d", &input[i]);
		i++;
	}
	i = 0;
	while (input[i] != 0) {
		printf("Case %d: %d\n", i, input[i]);
		i++;
	}
	return 0;
}