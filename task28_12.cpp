#include<iostream>
using namespace std;

void printArray(char a[][100], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if((i%2 == 0 && j%2 == 0) || (i%2 != 0 && j%2 != 0))
			{
				a[i][j]='W';
			}
			else
			{
				a[i][j]='B';
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	char a[100][100];
	int n;
//Nhap kich thuoc
	cout<<"Mang co kich thuoc : ";
	do
	{
		cin>>n;
	}
	while(1<n && n>100);
//Danh dau o den trang
	printArray(a, n);
	
	return 0;
}
