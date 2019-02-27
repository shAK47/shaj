#include <iostream>
#include<string.h>
using namespace std;

int main() {
int n,f=1;
cin>>n;
if(n==0)
	cout<<"1";
else
{
	for(int i=n;i>=1;i--)
	{
	f=f*i;
	}
	cout<<f;
}
return 0;
}
