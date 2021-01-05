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
    int i=0,j=0,key=0,count=0;
    p1 = a;
    p2 = b;
	
	
	if(strlen(a)<strlen(b))
	{
		cout<<"No";
		return 0;
	}
	else
	{
	    for(i = 0; i<strlen(a); i++)
        {
        	p2 = b;
            if(*p1 == *p2)
            {
                p3 = p1;
                for(j = 0 ; j<strlen(a) ; j++)
                {
                    if(*p3 == *p2)
                    {
						count++;
						if(count==5)
						{
							break;
						}
                    	p3++;p2++;
                    	
                    } 
                    else
                    {
                    	p3++;
					}
                }
                if(count==5)
                {
                    key=1;
                }
            }
        p1++; 	
        }
	}
	if(key==1)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
