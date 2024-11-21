#include<stdio.h>
int main(){
	float radius;
	const float PI =3.14;
	printf("nhap vao ban kinh hinh tron: ");
	scanf("%f", &radius);
	// tinh chu vi va dien tich
	float perimeter = 2 * PI * radius;
	float acreage = radius * radius * PI;
	printf("Chu vi hinh tron la: %.2f\n",perimeter);
	printf("Dien tich hinh tron la: %.2f",acreage);
	
}
