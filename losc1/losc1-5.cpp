//This is the homework for losc1-5
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b, c, d, e;
	a=pow(10,2);
	b=pow(10,3);
	c=pow(10,4);
	d=pow(10,5);
	e=pow(10,6);
	double cal1(int n);
	double Ia, Ib, Ic, Id, Ie;
	Ia = cal1(a);
	Ib = cal1(b);
	Ic = cal1(c);
	Id = cal1(d);
	Ie = cal1(e);
	cout << "S(" << a << ") = " << Ia << endl;
	cout << "S(" << b << ") = " << Ib << endl;
	cout << "S(" << c << ") = " << Ic << endl;
	cout << "S(" << d << ") = " << Id << endl;
	cout << "S(" << e << ") = " << Ie << endl;
	return 0;
}

double cal1(int n)
{
	double ret;
	ret = 0;
	unsigned long long i;
	for (i = n; i > 0; i--)
	{
		ret += 1./pow(i,2);
	}
	return ret;
}	
