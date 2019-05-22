#include<iostream>
#include<string>
using namespace std;
int main()
{
	int sp=0;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
		if(s[i]==' ')
			sp++;
	cout<<sp+1;
	return 0;
}
