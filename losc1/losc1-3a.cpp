//This is the homework for losc1-3a
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b;
	a = 10;
	b = 20;
	double Ia, Ib;
	double intergral1(int n);
	Ia=intergral1(a);
	Ib=intergral1(b);
	cout << "I" << a << " is: " << Ia << " I" << b << " is: " << Ib << endl;
	return 0;
}

double intergral1(int n)
{
	double ln(double x);
	double ret;
	if (n == 0)
	{
		ret = ln(11./10);
	}
	else
	{
		ret = 1./n - 10.*intergral1(n-1);
	}
	return ret;
}

double ln(double x)
{
	double sum, n;
	sum = 0;
	x -= 1;
	for (n = 1; fabs(pow(-1,n-1)*pow(x,n)/n) >= 1e-20; n++)
	{
		sum += pow(-1,n-1)*pow(x,n)/n;
	}
	return sum; 
}
