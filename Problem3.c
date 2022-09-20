#include<stdio.h>
#include"Library.h"
#include"Library.c"
int main()
{
    double area,area_under_A;
    area_under_A = find_area(20.077,11.598,26.526,90.138,23.674, 32.579);
    if(area_under_A==0.0)
        printf("Points are collinear");
    else
        printf("Area to be coloured black: %lf\n",area_under_A);
    return 0;
}