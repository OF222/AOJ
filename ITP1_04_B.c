#include<stdio.h>

int main(void) {
	double r;  //半径に用いる変数

	scanf("%lf", &r);
	printf("%f %f\n", 3.141592653589 * r * r, 2 * 3.141592653589 * r);  //円の面積と演習を表示


	return 0;
}
