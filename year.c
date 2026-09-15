#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int year;

    printf("연도 입력:");
    scanf("%d",&year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("윤년\n");
    }
    else {
        printf("평년\n");
    }

    return 0;
}