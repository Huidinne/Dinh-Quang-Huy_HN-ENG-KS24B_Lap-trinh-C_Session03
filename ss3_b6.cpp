#include<stdio.h>
int main(){
	float height, edgeLenght;
	printf("nhap vao do dai cua canh day: ");
	scanf("%f", &edgeLenght);
	printf("nhap vao chieu cao cua tam giac: ");
	scanf("%f", &height);
	// tính dien tich cua tam giac
	float acreage = (edgeLenght * height) / 2;
	printf("Dien tich hinh tam giac la: %.2f", acreage);
	
	
}
