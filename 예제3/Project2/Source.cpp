#include<stdio.h>
void main() {

    int x;
    float PI = 3.141592;
    scanf_s("%d", &x);
    float r = x / 2;
    float area = PI * r * r;
    float circumference = PI * 2 * r;

    
    printf("���� ���̴� %f\n", area);
    printf("���� �ѷ��� %f\n", circumference);

    fgetc(stdin);

}

