#include<iostream>
#include<conio.h>
using namespace std;

void input(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"nhap gia tri phan tu a["<<i<<"]:";
        cin>>a[i];	
        }
}

void output(int a[],int n){
	for(int j=0;j<n;j++){
		cout<<a[j];
		cout<<" ";
		}
}

int bubblesort(int a[],int n){
    for(int i=0;i<n;i++){
	 for(int j=0;j<n-1-i;j++){
	     if(a[j]>a[j+1]){
		    int tam=a[j+1];
		    a[j+1]=a[j];
		    a[j]= tam;
	      }
         }
    }
}

int main(){
	int n;
	cout<<"nhap n:";
	cin>>n;
	int a[n];
	input(a,n);
	bubblesort(a,n);
        output(a,n);
}	
