#include<iostream>
#include<conio.h>>
using namespace std;
int main(){
	int n=5;
	int arr[n]={1,2,5,6,8};
	int pos;
	cout<<"The original array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	cout<<"Enter the position where the item is to be deleted: ";
	cin>>pos;
	
	if(pos<0 && pos>n){
		cout<<"The item cannot be deleted.";
	}else{
		int k=pos;
		while(k<n-1){
			arr[k]=arr[k+1];
			k=k+1;
		}
		arr[n-1]=NULL;
		n=n-1;
	}
	cout<<"The new array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
getch();
return 0;
}
