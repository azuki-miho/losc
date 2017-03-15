//This is the homework for losc1-2a
#include<iostream>
#include<math.h>
#define x 1
using namespace std;

int main()
{
	double sum, n;
	sum = 0;
	for (n = 1; fabs(pow(-1,n-1)*pow(x,n)/n) >= 1e-6; n++)
	{
		sum += pow(-1,n-1)*pow(x,n)/n;
	}
	cout << "the minimun number of terms in the series is:" << n-1 << endl;
	return 0;
}	
