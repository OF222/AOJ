//標準偏差を表示するプログラム
#include<stdio.h>
#include<math.h>

int main(void) {
	int num;  //人数用の変数の宣言
	double point[1000], average = 0, variance = 0, standard_deviation;  //点数用の配列、平均、分散、標準偏差用の変数の宣言
	int i;

	while (1) {
		scanf("%d", &num);
		if (num == 0) break;  //num == 0 になったら終了する

		for (i = 0;i < num;i++) {
			scanf("%lf", &point[i]);  //点数の入力
			average = average + (point[i] / num);  //平均値の計算
		}
		for (i = 0;i < num;i++) {
			variance = variance + (pow(point[i] - average, 2) / num);  //分散の計算
		}
		standard_deviation = sqrt(variance);  //標準偏差の計算
		printf("%f\n", standard_deviation);  //標準偏差の表示

		average = variance = standard_deviation = 0;  //平均、分散、標準偏差のリセット
	}

	return 0;

}