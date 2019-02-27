#include <iostream>
using namespace std;

int main()
{
char a;
cin>>a;
if((a >='a' && a <='z') || (a >='A' && a <='Z'))
{
  if(a=='a'|| a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
    cout<<"Vowel";
  else 
    cout<<"Consonant";
}
else
  cout<<"Invalid";
	// your code goes here
return 0;
}
