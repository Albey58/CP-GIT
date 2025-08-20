#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100
int queue[MAX];
int rear=0;
int front=0;
bool isempty() {
    return (rear == front);
}

bool isfull() {
    return (rear == MAX);
}
void enqueue()
{
	if(isfull())
		printf("queue is full");
	else{
		int item;
		printf("Enter item to enqueue: ");
		scanf("%d",&item);
		queue[rear]=item;
		rear++;
	}
}
void dequeue()
{
	if(isempty())
		printf("queue is empty");
	else{
		printf("Deleted element is: %d",queue[front]);
		front++;
	}
}
void peek()
{
	if(isempty())
		printf("Empty queue");
	else{
		printf("element at front is %d",queue[front]);
	}
}
void display(){
	if(isempty())
		printf("Empty queue");
	else{	
		for(int i=front;i<rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
int main()
{
	int choice;
	while(1){
	printf("Enter choice:\n1.enqueue\n2.deqeue\n3.peek\n4.display\n5.exit");
	scanf("%d",&choice);
		switch(choice){
			case 1:
			enqueue();
			break;
			case 2:
			dequeue();
			break;
			case 3:
			peek();
			break;
			case 4:
			display();
			break;
			case 5:
			exit(0);
			break;
			default:
			printf("Wrong choice!");
		
		}	
	}
}
