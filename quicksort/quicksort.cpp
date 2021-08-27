#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void input(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"nhap gia tri phan tu a["<<i<<"]:";
        cin>>a[i];	
}}
void output(int a[],int n){
	for(int j=0;j<n;j++){
		cout<<a[j];
		cout<<" ";
		}
	}
void quicksort(int a[],int left,int right );	
void quicksort(int a[],int left,int right )
{
	if(left>=right) return;
	int pivot=a[(left+right)/2];
	int i=left; int j= right;
    do
	{
    	while(a[i]<pivot)i++;
    	while(a[j]>pivot)j--;
    	if(i<=j){
    		int tam=a[j];
    		a[j]=a[i];
    		a[i]=tam;
    		j--;
    		i++;
		}
	}
	while(i<j);
		quicksort(a,left,j);
		quicksort( a,i,right);
	}		
		
int main(){
	int n,left,right;
	cout<<"nhap n:";
	cin>>n;
	right=n-1;
	left=0;
	int a[n];
	input(a,n);
	quicksort(a,left,right);
    output(a,n);
}

