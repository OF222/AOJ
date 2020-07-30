//標準偏差を表示するプログラム
#include<stdio.h>
#include<math.h>

int main(void) {
	int num;
	double point[100], average = 0, variance = 0, standard_deviation;
	int i;

	while (1) {
		scanf("%d", &num);
		if (num == 0) break;

		for (i = 0;i < num;i++) {
			scanf("%lf", &point[i]);
			average = average + (point[i] / num);
		}
		for (i = 0;i < num;i++) {
			variance = variance + (pow(point[i] - average, 2) / num);
		}
		standard_deviation = sqrt(variance);
		printf("%f\n", standard_deviation);

		average = variance = standard_deviation = 0;
	}

	return 0;
}