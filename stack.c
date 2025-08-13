#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100
int top=-1;
int stack[MAX_SIZE];
bool isempty(){
	return(top==-1);	
}
int push(int element)
{
	if(top==MAX_SIZE-1)
	{
		printf("Overflow");
	}
	else{
		top++;
		stack[top]=element;
	}
}
int pop(){
	if(top==-1){
	printf("Stack underflow\n");
	return -1;
	}
	else{
	int element=stack[top];
	top--;
	return element;
	}	
}
int peek(){
	if(top==-1){
	printf("Stack underflow");
	return -1;
	}
	else{
	return stack[top];
	}
}
int display()
{
	int i;
	if(isempty())
	printf("Stack is empty,underflow\n");
	else{
	printf("Stack contents are:");
	for(i=top;i>=0;i--)
	{
		printf("%d\t",stack[i]);
	}}
}
int main()
{
	int choice,item;
	
	do{	
		printf("Enter your choice:\n1.Push\n2.Pop\n3.peek\n4.display\n5.exit\n");
		scanf("%d",&choice);
		switch(choice){
		case 1:
		printf("Enter the element to be pushed:");
		scanf("%d",&item);
		push(item);
		break;
		case 2:
		if(isempty())
		printf("Stack is empty\n");
		else
		{
			item=pop();
			printf("The popped element is %d",item);
		}
		break;
		case 3:
		if(isempty())
		printf("The stack is empty\n");
		else{
			item=peek();
			printf("top element is:%d",item);
			
		}
		break;
		case 4:
			display();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Wrong choice");
			
	}}
	while(1);
}
