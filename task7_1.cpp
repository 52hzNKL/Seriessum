#include<iostream>
using namespace std;

int main()
{
	int m,n,c,g;
	cin>>n;
	if(n<0)
	{
		return 0;
	}
	cin>>m;
	if(m>106)
	{
		return 0;
	}
	
	if(m%2!=0 || m<2*n || m>4*n)
	{
		cout<<"-1";
	}
	else
	{
		c = (m-2*n)/2;
	    g = (4*n-m)/2;
	    cout<<g<<" "<<c;
	}
	return 0;
}
