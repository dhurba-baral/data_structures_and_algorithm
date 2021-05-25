#include<iostream>
#include<conio.h>
using namespace std;
void merge(int a[10],int lb,int mid,int ub){
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[10];
	
	while(i<=mid && j<=ub){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
			k++;
		}else{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid){
		while(j<=ub){
			b[k]=a[j];
			j++;
			k++;
		}
	}else{
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
	}
	
	for(k=lb;k<=ub;k++){
		a[k]=b[k];
	}
	
}

void mergeSort(int a[],int lb,int ub){
	if(lb<ub){
		int mid=(lb+ub)/2;
		mergeSort(a,lb,mid);
		mergeSort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int main(){
	int arr[]={3,1,9,5,8};
	cout<<"The initial array is: "<<endl;
	for(int i;i<5;i++){
		cout<<arr[i]<<endl;
	}
	
	mergeSort(arr,0,4);
	
	cout<<"The sorted array is: "<<endl;
	for(int j=0;j<5;j++){
		cout<<arr[j]<<endl;
	}
	
	
	getch();
	return 0;
}
