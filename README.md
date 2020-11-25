# Seriessum
Seriessum
#include <iostream>
#include<iomanip>
using namespace std;

float series( int n)
{
	float sum = 0;
	int x,i;
	for (i=1,x=1;x<=n;i+=3,x++)
	{
		sum += (float)1/i;
	}
	return sum;
}
int main()
{
	cout<< fixed << setprecision(2)<<series(1)<<endl;
	cout<< fixed << setprecision(2)<<series(2)<<endl;
	cout<< fixed << setprecision(2)<<series(5);
	return 0;
}
