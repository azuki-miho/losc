//This is the homework for losc1-4
#include<iostream>
#include<math.h>
#define e 2.7182818284590459
using namespace std;

int main()
{
	int n;
	cout << "please input an integer n:";
	cin >> n;
	double In;
	double intergral3(int n);
	In = intergral3(n);
	cout << "I" << n << " is: " << In << endl;
	return 0;
}

double intergral3(int n)
{
	double ret;
	if (n == 0)
	{
		ret = e-1;
	}
	else
	{
		ret = e - n*intergral3(n-1);
	}
	return ret;
}
