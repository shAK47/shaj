#include <iostream>
using namespace std;

int main() {
int t,t1,t2,hr1,min1,hr2,min2;
cin>>hr1>>min1;
cin>>hr2>>min2;
t1=(hr1*60)+min1;
t2=(hr2*60)+min2;
t=t2-t1;
if(t<0)
	t=-t;
cout<<t/60<<" "<<t%60;
return 0;
}
