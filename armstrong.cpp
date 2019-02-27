#include <iostream>
using namespace std;

int main() {
int n,r,s=0,m;
cin>>n;
m=n;
while(n>0)
{
	r=n%10;
	s=s+(r*r*r);
	n=n/10;
}
if(s==m)
	cout<<"yes";
else
	cout<<"no";
return 0;
}
