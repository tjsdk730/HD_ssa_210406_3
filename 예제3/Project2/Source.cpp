#include<stdio.h>
void main() {

    int x;
    float PI = 3.141592;
    scanf_s("%d", &x);
    float r = x / 2;
    float area = PI * r * r;
    float circumference = PI * 2 * r;

    
    printf("원의 넓이는 %f\n", area);
    printf("원의 둘레는 %f\n", circumference);

    fgetc(stdin);

}

