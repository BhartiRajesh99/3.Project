#include<stdio.h>
#include"Library.h"
#include"Library.c"
int main()
{
    double angle_at_chowk;
    angle_at_chowk=find_angle(5,1,2,3);
    if(angle_at_chowk==0.0)
        printf("Roads are parallel");
    else
        printf("Angle at which these roads meets at 123 Chowk: %lf\n",angle_at_chowk);
    return 0;
}