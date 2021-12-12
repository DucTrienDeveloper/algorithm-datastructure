#include<iostream>
#include<conio.h>
using namespace std;

void input(int a[], int n)
{
     for (int i = 0;i < n;i++)
     {
         cout<<"nhap gia tri phan tu a["<<i<<"]:";
         cin>>a[i];	
     }
}

void output(int a[],int n)
{
     int j;
     for(j = 0;j < n;j++)
     {
        cout<<a[j];
	cout<<" ";
     }
}

int  insertsort(int a[], int n)
{
     int i;
     for(i = 1;i < n;i++)
     {
	 int j = i - 1;
	 int index = a[i];
               
         while(a[j] > index && j >= 0)
	 {
               a[j + 1] = a[j];
               j--;   
         }
	 a[j + 1] = index;
     }
 }

int  main()
{
     int n;
     cout<<"nhap so phan tu vao mang :";
     cin>>n;
     int a[n];
     input(a,n);
     insertsort(a,n);
     output(a,n);
}
