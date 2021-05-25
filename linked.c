#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	struct node{
	int data;
    struct node *next;
};

	struct node *head,*newnode,*temp;
	head=0;
	int choice=1;

	while(choice){
//	newnode=(struct node*) malloc(sizeof(struct node));
	newnode=new struct node[3];
	cout<<"Enter the data for newnode: ";
	cin>>newnode->data;
	newnode->next=0;

	if(head==0){
		head=newnode=temp;
	}else{
		temp->next=newnode;
		temp=newnode;
	}
	cout<<"Do you want to continue? Enter 1 for continuing and 0 for stoppng.";
	cin>>choice;
	}

	//for displaying
	cout<<"The linked list is: ";
	temp=head;
	while(temp!=0){
		cout<<(temp->data)<<endl;
		temp=temp->next;
	}

	getch();
	return 0;
}
