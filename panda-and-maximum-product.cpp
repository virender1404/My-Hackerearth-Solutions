//program by Mr. Awesome
#include<bits/stdc++.h>
using namespace std;
#define l(p) for(int i=0;i<p;i++)

int main ()
{
	 long long int n,i,a[100000];
	scanf("%lld",&n);
    l(n)
     scanf("%lld",&a[i]);
  sort(a,a+n);
  printf("%lld\n",max(a[0]*a[1],a[n-1]*a[n-2]));
 
   return 0;
}
