#include<iostream>
#include<conio.h>>

using namespace std;
void toh(int n,char source,char temp,char dest){
	if(n==1){
		cout<<"Move disk "<<n<<" "<<source<<" to "<<dest<<endl;
		return;
	}
	toh(n-1,source,dest,temp);   
	cout<<"Move disk "<<n<<" "<<source<<" to "<<dest<<endl;
	toh(n-1,temp,source,dest);
}
int main(){
	toh(4,'A','B','C');
	getch();
	return 0;
}
