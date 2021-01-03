#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	char a[100];
	cout<<" Nhap xau ki tu ";
	gets(a);
	char b[]="hello";
	
	char *p1, *p2, *p3;
        int i=0,j=0,key=0;
        p1 = a;
        p2 = b;
	
	
	if(strlen(a)<strlen(b))
	{
		cout<<"No";
	}
	else
	{
	    for(i = 0; i<strlen(a); i++)
        {
            if(*p1 == *p2)
            {
                p3 = p1;
                for(j = 0 ; j<strlen(b) ; j++)
                {
                    if(*p3 == *p2)
                    {
                        p3++;p2++;
                    } 
                    else
                        break;
                }
                p2 = b;
                if(j == strlen(b))
                {
                    key = 1;
                    cout<<"Yes";
                }
            }
        p1++; 
        }
    if(key==0)
    {
       cout<<"No";
    }
	}
	return 0;
}
