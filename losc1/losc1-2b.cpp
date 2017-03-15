//This is the homework for losc1-2b
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double sum, n, ln2;
	sum = 0;
	ln2 = log(2);
	for (n = 1; fabs(2*sum-ln2) >= 1e-6; n++)
	{
		sum += pow(1./3.,2.*n-1.)/(2.*n-1.);
	}
	cout << "the minimun number of terms in the series is:" << n << endl;
	return 0;
}

