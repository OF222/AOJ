//2点間の距離を表示するプログラム
#include<stdio.h>
#include<math.h>

//2点間の距離を計算する関数
double calculate_distance(double x1, double y1, double x2, double y2) {
	double x, y;
	double distance;

	x = pow(x1 - x2, 2);
	y = pow(y1 - y2, 2);
	distance = sqrt(x + y);

	return distance;
}

int main(void) {
	double x1, y1, x2, y2, distance;

	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	distance = calculate_distance(x1, y1, x2, y2);
	printf("%f", distance);  //距離の表示

	return 0;
}