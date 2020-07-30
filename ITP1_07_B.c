//ある範囲内での異なる3つの自然数の和が指定した数になる組み合わせの数を表示するプログラム
#include<stdio.h>

int main(void) {
	int range, sum, counter = 0;  //1～rangeまでの範囲で和がsumになる組み合わせをさがし、counterで数える
	int i, j, k;

	while (1) {
		scanf("%d %d", &range, &sum);
		if (range == 0 && sum == 0) break;  //入力が 0 0 で終了する
		
		//数を一つずつずらして探索する
		for (i = 1;i <= range - 2;i++) {
			for (j = i+1;j <= range - 1;j++) {
				for (k = j+1;k <= range;k++) {
					if (i + j + k == sum) {
						counter = counter + 1;  //3数の和がsumのときにcounterを1増やす
					}
				}
			}
		}
		printf("%d\n", counter);  //組み合わせの個数の表示
		counter = 0;  //counterのリセット
	}

	return 0;
}