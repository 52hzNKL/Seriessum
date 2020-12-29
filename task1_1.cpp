#include<iostream>
using namespace std;

void address(int a[], int n)
{
	for ( int i=0 ; i<n ; i++)
	{
		cin>>a[i];
	}
}
void minAddress(int a[], int n)
{
	int b[100][100];
	for ( int i=0 ; i<n ; i++)
	{
		for ( int j=i+1 ; j<n ; j++)
		{
		    if(a[i]>a[j])
		    {
			    b[i][j-1]=a[i]-a[j];
		    }
		    else
		    {
			    b[i][j-1]=a[j]-a[i];
		    }
		}
	}
//Tim khoang cach nho nhat
	int min = b[0][0];
	for ( int i=0 ; i<n ; i++)
	{
		for(int j=1 ; j<n ; j++)
		{
			if(b[i][j]<min && b[i][j]!=0)
		    {
			    min=b[i][j];
		    }
		}
		
	}
	cout<<"khoang cach nho nhat "<<min;
}
int main()
{
//du lieu vao
    int a[100];
    int n;
    cout<<"Nhap so nha: ";
    cin>>n;
    address(a, n);
//Xet khoang cach
    minAddress(a, n);
    
    
    return 0;
}
