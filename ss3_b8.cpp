#include<stdio.h>

int main() {
    int number;

    printf("Nhap vao mot so nguyen 4 chu so: ");
    scanf("%d", &number);

    int thousand = number / 1000;
    int hundred = (number / 100) % 10;
    int dozen = (number / 10) % 10;  
    int unit = number % 10;        

    int reversedNumber = unit * 1000 + dozen * 100 + hundred * 10 + thousand;
    printf("So nghich dao cua so da nhap la: %d\n", reversedNumber);

    return 0;
}

