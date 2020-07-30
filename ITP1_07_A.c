//成績をつけるプログラム
#include<stdio.h>

int main(viod) {
	int mid, fin, re;  //中間試験、期末試験、再試験の点数入力用の変数

	scanf("%d %d %d", &mid, &fin, &re);  //各値の入力
	while ((mid != -1) || (fin != -1) || (re != -1)) {  //すべての値に-1が入力されるまで繰り返す
		if ((mid == -1) || (fin == -1)) {
			printf("F\n");
		}
		else if (mid + fin < 30) {
			printf("F\n");
		}
		else if ((mid + fin >= 30) && (mid + fin < 50)&&(re < 50)) {
			printf("D\n");
		}
		else if (((mid + fin >= 50) && (mid + fin < 65)) || ((mid + fin >= 30) && (mid + fin < 50) && (re >= 50))){
			printf("C\n");
		}
		else if ((mid + fin >= 65) && (mid + fin < 80)) {
			printf("B\n");
		}
		else if(mid + fin >= 80){
			printf("A\n");
		}
		scanf("%d %d %d", &mid, &fin, &re);  //各値の入力
	}

	return 0;
}