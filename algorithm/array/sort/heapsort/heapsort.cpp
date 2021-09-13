#include<iostream>
#include<conio.h>
using namespace std;

void nhapmang(int a[],int n)
{
     for(int j = 0;j < n;j++)
     {
        cout<<"gia tri phan tu thu a["<<j<<"] la : ";
	cin>>a[j];
     }
}
void xuatmang(int a[],int n)
{
     for(int i = 0;i < n;i++)
     {
	cout<<a[i];
        cout<<" ";	
     }
}

void heap(int a[], int n, int i)
{
     int max   = i; 
     int left  = 2 * i + 1; 
     int right = 2 * i + 2; 
 
     if (left < n && a[left] > a[max])
         max = left;
 
     if (right < n && a[right] > a[max])
         max = right;
 
<<<<<<< HEAD
     if (max != i) {             //gia tri lon nhat se dat o vi tri i
=======
     if (max != i)            //gia tri lon nhat se dat o vi tri i
     {           
>>>>>>> 8615823de85e3728934e7dfecb94d593888fd897
         swap(a[i],a[max]);
 
         heap(a,n,max);
     }
}

void heapSort(int a[],int n)
{
   
     for(int i = n / 2 - 1;i >= 0;i--)    //tao nut
        heap(a,n,i);
 
     for(int i = n - 1;i > 0;i--)
     {
        
        swap(a[0],a[i]);
        
        heap(a,i,0);
     }
}

int  main()
{
     int n;
     int a[n];
     cout<<"nhap n: ";
     cin>>n;
     nhapmang(a,n);
     heapSort(a,n);
     xuatmang(a,n);
}
