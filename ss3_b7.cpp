#include<stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Nhap vao mot so nguyen 4 chu so: ");
    scanf("%d", &number);

    int thousand = number / 1000;  
    sum = sum + thousand;  

    int hundred = (number / 100) % 10;  
    sum = sum + hundred; 

    int dozen = (number / 10) % 10;
    sum = sum + dozen;  

    int unit = number % 10;  
    sum = sum + unit;  

    printf("Tong cac chu so cua so da nhap la: %d\n", sum);

}

