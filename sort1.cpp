#include <iostream>
using namespace std;

int main() {
int i,j,n,a[10],t;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
for(i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}
