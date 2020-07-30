//入力された値のミンコフスキー距離を表示するプログラム
#include<stdio.h>
#include<math.h>

int main(void) {
	int vari1[100], vari2[100], abolute_value[100], num, i;  //入力用の2つの配列、絶対値用の配列、値の個数用の変数、ループカウンタの宣言
	double distans_pow_p = 0, distance;  //p乗する前の距離の変数、距離の変数の宣言

	scanf("%d", &num);  //個数の入力
	//2つの配列の入力
	for (i = 0;i < num;i++) {
		scanf("%d", &vari1[i]);
	}
	for (i = 0;i < num;i++) {
		scanf("%d", &vari2[i]);
	}

	//p=1のとき
	for (i = 0;i < num;i++) {
		distans_pow_p = distans_pow_p + abs(vari1[i] - vari2[i]);
	}
	printf("%f\n", distans_pow_p);
	distans_pow_p = 0;

	//p=2のとき
	for (i = 0;i < num;i++) {
		distans_pow_p = distans_pow_p + pow(abs(vari1[i] - vari2[i]), 2);
	}
	distance = pow(distans_pow_p, 0.5);
	printf("%f\n", distance);
	distance = distans_pow_p = 0;

	//p=3のとき
	for (i = 0;i < num;i++) {
		distans_pow_p = distans_pow_p + pow(abs(vari1[i] - vari2[i]), 3);
	}
	distance = pow(distans_pow_p, 0.3333333333);
	printf("%f\n", distance);
	distance = distans_pow_p = 0;

	//p→∞のとき
	for (i = 0;i < num;i++) {
		abolute_value[i] = abs(vari1[i] - vari2[i]);
		if (distance < abolute_value[i]) {
			distance = abolute_value[i];
		}
	}
	printf("%f\n", distance);

	return 0;
}