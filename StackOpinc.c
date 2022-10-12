#include<stdio.h>
#include<stdlib.h>
struct Stack{
	int top;
    int size;
    int *arr;
};
int isEmpty(struct Stack *sp){
	if(sp->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct Stack *sp){
	if(sp->top==sp->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(struct Stack *sp){
	int val;
	if(isFull(sp)){
		printf("Stack is Full\n");
	}
	else{
		printf("Enter Element to Push: ");
    	scanf("%d",&val);
    	sp->top+=1;
    	sp->arr[sp->top]=val;
	}
}
void pop(struct Stack *sp){
	if(isEmpty(sp)){
		printf("The Stack is Empty!\n");
	}
	else{
		int delval=sp->arr[sp->top];
		printf("%d is deleted\n",delval);
		sp->top-=1;
	}
}
void peek(struct Stack *sp){
	int topelm=sp->arr[sp->top];
	printf("The Peek of Stack is %d\n",topelm);
}
void display(struct Stack *sp){
	if(isEmpty(sp)){
		printf("The Stack is Empty!\n");
	}
	else{
		int i;
	printf("The Elements of Stack are:\n ");
		for(i=sp->top;i>=0;i--){
		printf("%d",sp->arr[i]);
		}
	}
}
int main(){
	struct Stack *s;
	s->top=-1;
	s->size=5;
 	s->arr=(int *)malloc((s->size)*sizeof(int));
	static int ch=0;
	while(ch!=5){
		printf("Select option to do Operation on Stack:\n ");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Peek\n");
		printf("5.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:push(s);
				   break;
			case 2:pop(s);
				   break;
			case 3:display(s);
				   break;
			case 4:peek(s);
				   break;
			case 5:printf("Exiting From Program...\n");
					break;
			default:printf("Please Enter Proper choice \n");
		}
	}
	return 0;
}
