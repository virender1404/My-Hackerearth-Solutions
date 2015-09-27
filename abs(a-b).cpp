//program by Mr. Awesome
#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
#define ymca(p) for(int i=0;i<p;i++)
#define kk(p) for(int w=0;w<p;w++)
int main ()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	ymca(t)
	{
	 long long  int a[10001],k,s=0,j=1,n;
	  cin>>n;
	  kk(n)
	  {
	  	cin>>a[w];
	  	if(w!=0)
	  	{
	  		k=(n-w)*(a[w]-a[w-1]);
	  		k=j*k;
	  		s+=k;
	  		j++;
	  		
		  }
	  }
	  cout<<s<<endl;
	  
	}
	
	return 0;
} 
