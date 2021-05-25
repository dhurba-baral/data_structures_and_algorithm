#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;
int precedenceDefinition(char x){
	if(x=='+' && x=='-'){
		return 1;
	}else if(x=='*' && x=='/'){
		return 2;
	}else if(x=='^'){
		return 3;		
	}else{
		return 0;
	}
}
string infixToPostfix(string infixExp){
	stack<char> st;
	string postfix="";
	
	st.push('(');
	infixExp=infixExp+')';
	
	for(int i=0;i<infixExp.length();i++){
		if(infixExp[i]==' '){
			continue;
		}
		else if((infixExp[i] >= 'a' && infixExp[i] <= 'z') ||  (infixExp[i] >= 'A' && infixExp[i] <= 'Z')){
			postfix=postfix+infixExp[i];
		}
		else if(infixExp[i]=='('){
			st.push('(');
		}
		else if(infixExp[i]==')'){
			while(!st.empty() && st.top()!='('){
				postfix=postfix+st.top();
				st.pop();
			}
			st.pop();
		}
		else if(infixExp[i]=='+' || infixExp[i]=='-' || infixExp[i]=='/' || infixExp[i]=='^' || infixExp[i]=='*'){
			while(!st.empty() && precedenceDefinition(infixExp[i]<=precedenceDefinition(st.top()))){
				postfix=postfix+st.top();
				st.pop();	
			}
			st.push(infixExp[i]);
			
		}
		
	}
//	while(!st.empty()){
//		st.pop();
//		postfix=postfix+st.top();
//	}
	return postfix;
}
int main(){
	char expression[20];
	cout<<"Enter the infix expression: ";
	cin.getline(expression,50);
	cout<<"The required postfix expression is: "<<infixToPostfix(expression);
	
	getch();
	return 0;
}

