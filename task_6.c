#include <stdio.h>


int main()
{
    float y = 6.673 * pow(10, -11);
    int m1;
    int m2;
    int r;
    double F;
    printf("Enter an m1: ");
    scanf("%d", &m1);
    printf("Enter an m2: ");
    scanf("%d", &m2);
    printf("Enter an r: ");
    scanf("%d", &r);
    F = (y*m1*m2)/pow(r, 2);
    printf("F=%f", F);

    return 0;
}//
// Created by Lena on 26.01.2021.
//

