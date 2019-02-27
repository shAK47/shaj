#include <iostream>
using namespace std;

int main()
{
int n,i,count=0;
for(i=2;i<n;i++)
{
	if(n%i==0)
	count++;
}
if(count>0)
	cout<<"no";
else
	cout<<"yes";
return 0;
}
pr
