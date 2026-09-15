#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int score;
    char grades;

    printf("결과 점수 입력(0-100): ");
    scanf("%d", &score);

    switch (score) {
        case 90 ... 100:
            grades = 'A';
            break;
        case 80 ... 89:
            grades = 'B';
            break;
        case 70 ... 79:
            grades = 'C';
            break;
        case 60 ... 69:
            grades = 'D';
            break;
        default:
            grades = 'F';
            break;
    }

    printf("학점은 %c \n", grades);

    return 0;
}