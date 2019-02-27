#include <iostream>
#include<string.h>
using namespace std;

int main() {
char a[100];
cin>>a;
for(int i=strlen(a);i>=0;i--)
	cout<<a[i];
return 0;
}
