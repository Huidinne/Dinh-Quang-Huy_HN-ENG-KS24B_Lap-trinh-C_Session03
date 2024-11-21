#include<stdio.h>
int main(){
	float math, literature, english;
	printf("nhap vao diem toan: ");
	scanf("%f", &math);
	printf("nhap vao diem van: ");
	scanf("%f", &literature);
	printf("nhap vao diem anh: ");
	scanf("%f", &english);
	// tinh tong diem va diem trung binh
	float sum = math + literature + english;
	float avg = sum / 3;
	printf("tong diem ca mon la: %.2f\n", sum);
	printf("diem trung binh cac mon la: %.2f", avg);
	
}
