#include<iostream>
#include<conio.h>>
#define maxsize 5
using namespace std;
int queue[maxsize],data,rear=-1,front=-1;
void enqueue();
void dequeue();
void display();

int main(){
	start:
	int choice;
	cout<<"1:Enqueue operation"<<endl;
	cout<<"2:Dequeue operation"<<endl;
	cout<<"3.Display operation"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>choice;

	switch(choice){
		case 1:enqueue();
		break;
		case 2:dequeue();
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
void enqueue(){
	if(rear==maxsize-1){
		cout<<"Queue is full.You cannot enter more data."<<endl;
	}else if(front==-1 && rear==-1){
		front=rear=0;
		cout<<"Enter data: "<<endl;
		cin>>data;
		queue[rear]=data;
	}else{
		rear++;
		cout<<"Enter data: "<<endl;
		cin>>data;
		queue[rear]=data;
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		cout<<"Queue is empty."<<endl;
	}else if(front==rear){
		data=queue[front];
		cout<<"The dequeued element is: "<<data<<endl;
		front=rear=-1;
	}else{
		data=queue[front];
		cout<<"The dequeued element is: "<<data<<endl;
		front=front+1;
	}
}

void display(){
	if(front==-1 && rear==-1){
		cout<<"The queue is empty."<<endl;
	}else{
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<endl;
		}
	}
}
