#include<iostream>
#include<conio.h>>
#define maxsize 5
using namespace std;
int stack[maxsize],data,top=-1;
void push();
void pop();
void display();

int main(){
	start:
	int choice;
	cout<<"1:Push operation"<<endl;
	cout<<"2:Pop operation"<<endl;
	cout<<"3.Display operation"<<endl;
	cout<<"4.Exit";
	cout<<"Enter your choice: "<<endl;
	cin>>choice;

	switch(choice){
		case 1:push();
		break;
		case 2:pop();
		break;
		case 3:display();
		break;
		case 4:exit(0);
		break;
		default:cout<<"Invalid choice"<<endl;
		break;
	}
	goto start;
	getch();
	return 0;
}
void push(){
	if(top==maxsize-1){
		cout<<"Stack is full. You cannot enter more data."<<endl;
	}else{
		cout<<"Enter data: "<<endl;
		cin>>data;
		top++;
		stack[top]=data;
	}
}

void pop(){
	if(top==-1){
		cout<<"Stack is empty."<<endl;
	}else{
		data=stack[top];
		cout<<"The popped element is: "<<data<<endl;
		top--;
	}
}

void display(){
	if(top==-1){
		cout<<"The stack is empty."<<endl;
	}else{
		for(int i=0;i<=top;i++){
			cout<<stack[i]<<endl;
		}
	}
}
