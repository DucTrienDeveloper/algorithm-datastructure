#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void nhapmang(int a[], int n){
	for(int j = 0;j < n; j++){
		cout<<" gia tri phan tu thu a["<<j<<"] la : ";
		cin>>a[ j ];
	}
}

void xuatmang(int a[],int n){
	for (int i = 0;i < n; i++){
	    cout<<a[ i ];
		cout<<" ";	
		}
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
  
    int L[n1], R[n2];
 
   
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
   
    i = 0; 
    j = 0; // Khoi tao chi so bat dau cua mang con thu hai
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy các phan tu còn lai cua mang L vào mang a neu có */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
     /* Copy các phan tu còn lai cua mang L vào mang a neu có */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l là chi so trái và r là chi so phai cua mang con duoc sap xep */
void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        // Tuong tu (l+r)/2
        int m = l+(r-l)/2;
 
        // Goi hàm de quy tiep tuc chia dôi tung nua mang
        mergeSort(a , l, m);
        mergeSort(a , m+1, r);
 
        merge(a , l, m, r);
    }
}
int main(){
	int n;
	int a[n];
	cout<<"nhap n : ";
	cin>>n;
	nhapmang (a , n);
    mergeSort(a, 0, n-1 );
	xuatmang( a, n);
	
}
