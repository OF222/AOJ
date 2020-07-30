//三角形の面積、周の長さ、高さを表示するプログラム
#include<stdio.h>
#include<math.h>

//三角形の面積を計算する関数
double calculate_area(double side1, double side2, double deg) {
	double area;
	double pi = 3.1415926535;

	area = side1 * side2 * sin(deg * pi / 180) / 2;

	return area;
}

//三角形の周の長さを計算する関数
double calculate_lap(double side1, double side2, double deg) {
	double side3, lap;
	double pi = 3.1415926535;

	side3 = sqrt(pow(side1, 2) + pow(side2, 2) - 2 * side1 * side2 * cos(deg * pi / 180));
	lap = side1 + side2 + side3;

	return lap;
}

//side1を底辺とする三角形の高さを計算する関数
double calculate_high(double side2, double deg) {
	double high;
	double pi = 3.1415926535;

	high = side2 * sin(deg * pi / 180);

	return high;
}
int main(void) {
	double side1, side2, deg;
	double S, L, h;

	scanf("%lf %lf %lf", &side1, &side2, &deg);  //2辺と間の角度の入力
	S = calculate_area(side1, side2, deg);
	L = calculate_lap(side1, side2, deg);
	h = calculate_high(side2, deg);

	printf("%f\n %f\n %f\n", S, L, h);  //各値の表示

	return 0;
}
