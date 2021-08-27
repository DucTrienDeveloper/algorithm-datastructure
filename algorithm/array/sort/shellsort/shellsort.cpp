#include<iostream>
#include<conio.h>
using namespace std;
void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"gia tri phan tu thu a["<<i<<"] la :";
        cin>>a[i];
        
	}
}
void xuatmang (int a[],int n){
    for(int j=0;j<n ; j++){
	    cout<<"\ngia tri phan tu thu a["<<j<<"] la :";
		cout<<a[j];
		cout<<" "; 
	 }
}
  int shellsort(int a[],int n){
  
  	for(int gap=n/2;gap>0;gap/=2){
  		for(int j=gap;j<n;j++){
  			for(int i=j-gap;i>=0;i-=gap){
  				if(a[i+gap]>a[i]){
  					break;
				  }
				else{
					int temp=a[i+gap];
					a[i+gap]=a[i];
					a[i]=temp;
				}  
			  }
		  }
	  }
  }  
int main(){
	int n;
   int a[n];

   
   cout<<"moi nhap so n :";
   cin>>n;
   nhapmang(a,n);
   shellsort(a,n);
   xuatmang(a,n);
   
}
