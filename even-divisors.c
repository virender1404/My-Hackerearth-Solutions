#include<iostream>

#include<stdio.h>
#include<math.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long	int a,i,count=0;
    	cin>>a;
    for(i=1;i<=sqrt(a);i++)
    {
    	if(i==sqrt(a)&&i*i==a&&i%2==0)
    	count++;
    else	if(a%i==0&&i%2==0)
    	{  
    		count++;
    		if((a/i)%2==0)
    		count++;
    		
		}
		else if(a%i==0&&i%2!=0)
		{
			if((a/i)%2==0)
			count++;
		}
	}
	cout<<count<<endl;
    
	}
	return 0;
}
