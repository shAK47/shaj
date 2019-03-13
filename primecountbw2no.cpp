#include <iostream>
#include<string.h>
using namespace std;

int main() {
int i,j,start,end,count=0,c=0;
cin>>start>>end;
for(i=start;i<=end;i++)
{
	if(i==2)
		count++;
	else
	{
	for(j=2;j<i;j++)
	{
		c=0;
		if(i%j==0)
    	{	
    		c++;
    		break;
    	}
	}
	if(c==0)
		count++;
	}
}
cout<<count;
return 0;
}
