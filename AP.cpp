#include <iostream>
using namespace std;

int main() {
int n,a,d,s,l;
cin>>n>>a>>d;
if(d>0)
{
l=a+(n-1)*d;
s=n/2*(a+l);
cout<<s;
}
else
	cout<<n*a;
return 0;
}
