#include <iostream>
using namespace std;

int main() {
int n,i,j,a[100],count=0,temp,mid;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
	count++;
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
mid=count/2;
cout<<a[mid];
return 0;
}
