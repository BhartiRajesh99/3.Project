#include<stdio.h>
#include"Library.h"
#include"Library.c"
int main()
{
    double distance;
    distance = find_distance(23.259933,77.412613,12.9716,77.5946);
    printf("Distance Between Saurabh Sir and Prateek Sir: %lf\n",distance);
    return 0;
}
