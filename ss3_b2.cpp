#include<stdio.h>
int main(){
	float celsius;
	printf("nhap vao nhiet do theo do c: ");
	scanf("%f",&celsius);
	float fahrenheit = (celsius * 9 / 5) + 32;
	printf("nhiet do theo do F la: %.2f\n",fahrenheit);
}
