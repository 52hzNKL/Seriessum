#include <iostream>
void input(int &x, int a[]);
void output(int x, int a[]);
using namespace std;

int main()
{
	int n;
	int a[1000];
	input(n,a);
	output(n,a);
}
void input(int &x, int a[])
{
	cin >> x;
	for (int i=1; i<=x; i++)
	{
		cin >> a[i];
	}
}
void output(int x, int a[])
{
	int d=1;
	cout << a[1] ;
	for(int i=2;i<=x;i++)
	{	
		if(a[i]==a[i-1]+1)
		{
			d++;
		}
		else
		{
		if (d>2)
		{
			cout << " - " << a[i-1] << ", " << a[i];
		}else
		{
			cout << ", " << a[i];
		}
		d=1;
		}
	}
}
