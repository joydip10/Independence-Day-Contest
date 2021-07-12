#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double radi,circ_area,sqr_area,shaded_area;
    int test;
    double pi;
    pi=2*acos(0.0);
    cin>>test;
    if(test>1000) return 0;
    for(int i=1;i<=test;i++)
    {
        cin>>radi;
        if(radi<0 || radi>1000) break;
        circ_area=pi*radi*radi;
        sqr_area=(2*radi)*(2*radi);
        shaded_area=(sqr_area-circ_area);
        printf("Case %d: %0.2f\n",i,shaded_area);
    }
    return 0;
}
