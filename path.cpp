#include<iostream>
using namespace std;

int main()
{
	char a[225];
	for(int i=0; i<225; i++)
	{
		a[i]=' ';
	}
	for(int i=0; i<255; i++)
	{
		cout<<a[i];
	}
	return 0;
}
