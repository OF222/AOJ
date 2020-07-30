//入力した任意の個数の整数の最小値、最大値、合計値を出力するプログラム
#include<stdio.h>

int main(void) {
	int n, i;
	int sequence[10000];  //入力用の変数
	long int sum = 0;  //合計用の変数
	int min, max;  //最小、最大用の変数

	scanf("%d", &n);  //入力する数の個数を決定する
	for (i = 0;i < n;i++) {  //n個の数を入力
		scanf("%d", &sequence[i]);
		sum = sum + sequence[i];
	}
	min = max = sum / n;  //min,maxの初期値をsequenceの平均値にする
	//最小値、最大値の決定
	for (i = 0;i < n;i++) {
		if (min > sequence[i]) {
			min = sequence[i];
		}
		if (max < sequence[i]) {
			max = sequence[i];
		}
	}
	printf("%d %d %ld\n", min, max, sum);  //各数の表示

	return 0;
}