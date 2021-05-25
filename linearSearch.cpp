#include<iostream>
#include<conio.h>>
using namespace std;

int main(){
	int x,flag=0;
	cout<<"Enter the element to be searched: ";
	cin>>x;
	
	int a[]={5,6,7,8,10};
	for(int i=0;i<5;i++){
		if(a[i]==x){
			flag=1;
			if(flag==1){
			cout<<"The element is found at: "<<i;
		}
		}
		
	}
	if(flag==0){
			cout<<"The element is not found.";
		}
	getch();
	return 0;
}
