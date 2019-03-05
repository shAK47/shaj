#include <iostream>
#include<string.h>
using namespace std;
int value(char);
int main() {
int i,num=0;
char roman[10];
cin>>roman;
for(i=0;i<strlen(roman);i++)
{
	if(value(roman[i])>=value(roman[i+1]))
		num=num+value(roman[i]);
	else{
		num=num+value(roman[i+1])-value(roman[i]);
		i++; }
}
cout<<num;
return 0;
}
int value(char c){
	int v;
	switch(c)
	{
		case 'I': v=1; break;
		case 'V': v=5; break;
		case 'X': v=10; break;
		default : v=-1;
	}
	return v;
}
