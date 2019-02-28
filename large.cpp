#include <iostream>
using namespace std;

int main() {
int n,a[10],h,i;
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];
h=a[0];
for(i=1;i<n;i++)
{
	if(h<a[i])
		h=a[i];
}
cout<<h;
return 0;
}
