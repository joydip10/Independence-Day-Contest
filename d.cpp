#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int test;
	long long  m;
	long long  n;
	long long sum;
	scanf("%d",&test);
	for (int i=1;i<=test;i++) {
		scanf("%lld %lld",&n,&m);
		sum=(n*m)/2;
		printf("Case %d: %lld\n",i,sum);
	}
    return 0;
}
