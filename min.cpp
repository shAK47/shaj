#include <iostream>
using namespace std;

int main() {
int n,a[10],l,i;
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];
l=a[0];
for(i=1;i<n;i++)
{
	if(l>a[i])
		l=a[i];
}
cout<<l;
return 0;
}
