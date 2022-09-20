#include<math.h>
#define PI 3.14
double find_angle(int x1,int y1,int x2,int y2)
{
    double slope1,slope2,tan,angle;
    slope1=-x1/(double)y1;
    slope2=-x2/(double)y2;
    tan=(slope1-slope2)/(1+slope1*slope2);
    if(tan<0)
        tan=-tan;
    angle=((180/PI)*atan(tan));
    return angle;
}
double find_distance(double x1,double y1,double x2,double y2)
{
    double distance,sq1,sq2;
    sq1=pow(x2-x1,2);
    sq2=pow(y2-y1,2);
    distance=sqrt(sq1+sq2);
    if(distance<0)
        distance=-distance;
    return distance;
}
double find_area(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double area;
    area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(area<0.0)
        area=-area;
    return area;
}