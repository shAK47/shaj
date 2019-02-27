#include <iostream>
using namespace std;

int main()
{
int i,n,k,sum=0;
cin>>n;
cin>>k;
for(i=1;i<=n;i++)
   cout<<i<<" ";
for(i=1;i<=k;i++)
   sum=sum+i;
cout<<"\n"<<sum;
return 0;
}
