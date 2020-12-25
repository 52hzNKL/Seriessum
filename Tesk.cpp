/* DE BAI
Cho phep nhap vao n sinh vien, moi sinh vien co k mon hoc, moi mon hoc co mot diem tuong ung.
Viet chuong trinh thuc hien:
1, Cho phep nhap diem cua k mon hoc cua n sinh vien ---> Hien thi ra man hinh diem do
2, Hien thi cac sinh vien co diem trung binh lon nhat
3, Hien thi cac sinh vien co so luong diem tung mon hoc < 5 nhieu nhat
4, Sap xep tang dan theo diem trung binh ---> Hien thi ra man hinh
5, Xoa tat ca cac sinh vien co diem trung binh nho hon 5 ----> Hien thi ra man hinh
*/
#include<iostream>
using namespace std;

//Nhap diem vao
void inputValue(int a[][100], int n, int k)
{
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<k; j++)
		{
			cout<<"Diem mon "<<j+1<<" cua sinh vien thu "<<i+1<<" : ";
			cin>>a[i][j];
		}
	}
}
//Hien thi diem
void outputValue(int a[][100], int n, int k)
{
	for(int i = 0; i<n; i++)
    {
    	for(int j=0; j<k; j++)
    	{
    		cout<<"Diem mon "<<j+1<<" cua sinh vien thu "<<i+1<<" : ";
    		cout<<a[i][j]<<endl;
		}
	}
}
//Hien thi sinh vien co diem trung binh lon nhat
void maxValue(int a[][100], int n, int k)
{
	double b[100];
	double max=0;
	double DTB;
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<k; j++)
		{
			DTB += a[i][j];
		}
	    DTB=DTB/k;
		b[i]=DTB;
	    DTB=0;	
	}
	for(int i = 0 ; i<n; i++)
	{
		if(b[i]>max)
		max=b[i];
	}
    for(int i = 0 ; i<n; i++)
    {
    	if(b[i]==max)
    	{
    		cout<<"Sinh vien thu "<< i+1 <<" co diem trung binh lon nhat la "<<b[i]<<endl;
		}
    	
	}

}
//Hien thi cac sinh vien co so luong diem tung mon hoc < 5 nhieu nhat
void minValue(int a[][100], int n, int k)
{
	int bien=0;
	int soDiemMax=0;
	int b[100];
	for(int i = 0 ; i<n; i++)
	{
		for(int j=0; j<k; j++)
		{
			if(a[i][j]<5)
			{
				bien++;
			}
		}
		b[i]=bien;
	    bien=0;	
	}
	for(int i = 0 ; i<n; i++)
	{
		if(b[i]>soDiemMax)
		{
			soDiemMax=b[i];
		}
	}
	for(int i = 0 ; i<n; i++)
    {
    	if(b[i]==soDiemMax)
    	{
    		cout<<"Sinh vien thu "<< i+1 <<" co diem <5 nhieu nhat la "<<b[i]<<endl;
		}
	}
}
//Sap xep tang dan theo diem trung binh ---> Hien thi ra man hinh
void sapXepDTB(int a[][100], int n, int k)
{
	double b[100];
	double max=0;
	double DTB;
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<k; j++)
		{
			DTB += a[i][j];
		}
	    DTB=DTB/k;
		b[i]=DTB;
	    DTB=0;	
	}
	for(int i=0; i<n; i++)
	{
		int tg;
		for(int j=i+1; j<n; j++)
		{
			if(b[i]>b[j])
			{
				tg=b[i];
				b[i]=b[j];
				b[j]=tg;
			}
		}
	}
	cout<<"Diem trung binh sau khi sap xep ";
	for(int i=0; i<n; i++)
	{
		cout<<b[i]<<" ";
	}
}
//Xoa tat ca cac sinh vien co diem trung binh < 5 ---> hien thi nhung sinh vien con lai ra man hinh
void Delete( int a[][100], int n, int k)
{
	double b[100];
	double DTB;
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<k; j++)
		{
			DTB += a[i][j];
		}
	    DTB=DTB/k;
		b[i]=DTB;
	    DTB=0;	
	}
	for(int i = 0; i<n; i++)
	{
		if(b[i]>=5)
		{
			cout<<"Sinh vien co so diem trung binh lon hon 5 : "<<i+1;
		}
	}
}
int main()
{
	int a[100][100];
	int n,k;
//Nhap sinh vien va mon hoc va in ra man hinh
    cout<<" So sinh vien : ";
    cin>>n; 
    cout<<" So mon hoc : ";
    cin>>k;
    inputValue(a, n, k);
    cout<<endl; 
    outputValue(a, n, k);
    cout<<endl;
//ket qua bai 2   
    maxValue(a, n, k);
    cout<<endl;
//ket qua bai 3
    minValue(a, n, k);
    cout<<endl;
//ket qua bai 4
    sapXepDTB(a, n, k);
	cout<<endl;
//ket qua bai 5
	Delete(a, n, k);
	cout<<endl;
	
    
	return 0;
}
