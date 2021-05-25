#include<iostream>
#include<conio.h>>
using namespace std;
int main(){
	int n=4;
	int arr[n]={1,2,5,6};
	int pos,item;
	cout<<"The original array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	cout<<"Enter the position where the item is to be inserted: ";
	cin>>pos;
	cout<<"Enter the item to be inserted: ";
	cin>>item;
	
	if(pos<0 && pos>n){
		cout<<"The item cannot be inserted.";
	}else{
		int k=n-1;
		while(k>=pos){
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[pos]=item;
		n=n+1;
	}
	cout<<"The new array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
getch();
return 0;
}
