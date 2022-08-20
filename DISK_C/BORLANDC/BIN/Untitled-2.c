#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main(void)
{
    double r,area;
    while(1)
    {
        printf("input the radius:");
        scanf("%lf",&r);
        if(fabs(r)<=1e-5)     break;
        else if(r<0.0)
        {
            printf("the input is error\n");
            continue;
        }
        area=PI*r*r;
        printf("the area is :%lf\n",area);
    }
}