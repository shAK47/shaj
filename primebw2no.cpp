#include <iostream>
using namespace std;

int main() {
int n1,n2,count;
cin>>n1>>n2;
for(int i=n1+1;i<n2;i++)
{
	count=0;
	for(int j=2;j<i;j++)
	{
		if(i%j==0)
		count++;
	}
	if(count==0)
	cout<<i<<" ";
}
return 0;
}
