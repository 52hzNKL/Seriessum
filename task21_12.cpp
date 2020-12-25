#include<iostream>
using namespace std;

int tong(int a[], int n)
{
	int tong=0;
    for(int i=0;i<n;i++)
    {
        tong+=a[i];
	}
	return tong;
}

int main()
{
	//Nhap vao
	int n;
	cout<<"So luong tao ";
	do
	{
		cin>>n;
	}
	while(n<1 && 100<n);
	int a[100];
	for(int i=0;i<n;i++)
	{
	    cout<<"Nhap a["<<i<<"] ";
		cin>>a[i];
	}
	//Xet dieu kien nhap vao
	if(n==1)
	{
		cout<<"No";
	}
	else
	{
	    for(int i=0;i<n;i++)
	     {
		if(a[i]!=100 && a[i]!= 200)
		{
			cout<<"Khoi luong tao khong dung";
			return 0;
		}
	      }
	    //Xet chia het hay khong
	    if(tong(a, n) % 200==0 )
	    {
		cout<<"Yes";
	    }
	    else
	    {
		cout<<"No";
	    }
	}
	return 0;
}
