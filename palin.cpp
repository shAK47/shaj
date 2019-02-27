#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int n,m,s=0,r;
cin>>n;
m=n;
while(n>0)
{
	r=n%10;
	s=(s*10)+r;
	n=n/10;
}
if(m==s)
	cout<<"yes";
else
	cout<<"no";
return 0;
}
