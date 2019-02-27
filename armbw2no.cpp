#include <iostream>
using namespace std;

int main() {
int n,n1,n2,r,s,m;
cin>>n1>>n2;
for(n=n1+1;n<n2;n++)
{
s=0;m=n;r=0;
while(m>0)
{
	r=m%10;
	s=s+(r*r*r);
	m=m/10;
}
if(s==n)
	cout<<s<<" ";
}
return 0;
}
