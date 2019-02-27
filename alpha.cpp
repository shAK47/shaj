#include <iostream>
using namespace std;

int main()
{
char a;
cin>>a;
if((a >='a' && a <='z') || (a >='A' && a <='Z'))
	cout<<"Alphabet";
else 
    cout<<"No";
return 0;
}
