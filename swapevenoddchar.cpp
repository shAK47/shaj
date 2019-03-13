#include <iostream>
#include<string.h>
using namespace std;

int main() {
int i,temp;
char a[10];
cin>>a;
for(i=0;i<strlen(a);i+=2)
{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}
cout<<a;
	return 0;
}
