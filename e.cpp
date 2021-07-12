#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int test;
    double v1,v2,v3,a1,a2,d,b_d,d1,d2,t;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        d1=(v1*v1)/2*a1;
        d2=(v2*v2)/2*a2;
        d=d1+d2;
        t=(2*d)/(v1+v2);
        b_d=v3*t;
        printf("Case %d: %lf %0.1f\n",i,d,b_d);
    }
    return 0;
}
