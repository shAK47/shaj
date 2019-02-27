#include <iostream>
using namespace std;

int main()
{
int i,n,a[10],k,sum=0;
cin>>n;
cin>>k;
for(i=0;i<n;i++)
   cin>>a[i];
for(i=0;i<k;i++)
   sum=sum+a[i];
cout<<sum;
return 0;
}
