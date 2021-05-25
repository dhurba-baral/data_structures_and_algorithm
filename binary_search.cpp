#include<iostream>
#include<conio.h>>
using namespace std;

int binary_search(int a[], int low, int high, int x) 
{ 

      if(high>=1){
      	int mid =(low+high)/2; 
        if (a[mid]==x){
        	 return mid;
		}else if(a[mid]>x){
        	return binary_search(a,low,mid-1,x); 
		}else{
			return binary_search(a,mid+1,high,x);
		}
	  }
		
		return -1;
    } 
int main(){
    int arr[]={2,4,6,10,60};
    int x=10;
    int search_result=binary_search(arr,0,4,x);
    if(search_result == -1){
    	cout<<"The element is not present.";
	}else{
		cout<<"The element is present at index: "<<search_result;
	}
	getch();
	return 0;
}
