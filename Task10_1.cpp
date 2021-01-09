#include<iostream>
using namespace std;

void pascal(int a[][100], int n)
{
	for(int i=0; i<n; i++)
	{
		a[i][0] = a[i][i] = 1;
		for(int j=1;j<=i;j++)
		{
            a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<a[i][j]<<" ";
		}  
		cout<<endl; 
    }
	
}
int main()
{
	int n;
	int a[100][100];
	cin>>n;
	if(n<0 || n>50)
	{
		return 0;
	}
	
	pascal(a, n);
	
	return 0;
}
