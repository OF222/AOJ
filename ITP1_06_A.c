//与えられた数を逆順に表示するプログラム
#include<stdio.h>

int main(void) {
	int n;
	int sequence[100];
	int i;

	scanf("%d", &n);  //入力する数n個の指定
	for (i = 0;i < n;i++) {
		scanf("%d", &sequence[i]);  //数を入力する
	}
	//数を逆順にして表示する
	for (i = n -1;i > 0;i--) {
		printf("%d ", sequence[i]);
	} 
	printf("%d\n", sequence[i]);

	return 0;
}