#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,temp,i,j;
	int a[]={2,9,6,7,4};
	cout<<"The initial array is: "<<endl;
	for(i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	for(i=1;i<5;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	cout<<"The sorted array is: "<<endl;
	for(i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	
	
	getch();
	return 0;
}
