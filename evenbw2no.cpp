#include <iostream>
using namespace std;

int main() {
int n1,n2;
cin>>n1>>n2;
for(int i=n1+1;i<n2;i++)
{
	if(i%2==0)
	cout<<i<<"";
}
return 0;
}
