//This is the home work for losc1-3b
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b;
	a=10;
	b=20;
	float Ia, Ib;
	float intergral2(int n);
	Ia=intergral2(a);
	Ib=intergral2(b);
	cout << "I" << a << " is: " << Ia << " I" << b << " is: " << Ib << endl;
	return 0;
}

float intergral2(int n)
{
	float ret;
	if (n == 40)
	{
		ret = 21. /200./41.;
	}
	else
	{
		ret = 0.1*(1./(n+1.)-intergral2(n+1));
	}
	return ret;
}
