#include<iostream>
#include<cstdlib>
using namespace  std;
class Stack{
    public:
    int top;
    int size;
    int *arr;
        Stack(int s){
            top=-1;
            size=s;
            arr=(int *)malloc(size*sizeof(int));
        }
    void push();
    void pop();
    int isEmpty();
    int isFull();
    void display();
    void peek();
    
};
void Stack::push(){
	int val;
	if(isFull()){
		cout<<"Stack is Full"<<endl;
	}
	else{
		cout<<"Enter Element to Push: ";
    	cin>>val;
    	top+=1;
    	arr[top]=val;
	}
    
}
void Stack:: pop(){
	if(isEmpty()){
		cout<<"The Stack is Empty!"<<endl;
	}
	else{
		int delval=arr[top];
		cout<<delval<<" is Deleted"<<endl;
		top-=1;
	}
}
int Stack::isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int Stack::isFull(){
	if(top==size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void Stack::display(){
	if(isEmpty()){
		cout<<"The Stack is Empty!"<<endl;
	}
	else{
	cout<<"The Elements of Stack are: "<<endl;
		for(int i=top;i>=0;i--){
		cout<<arr[i]<<endl;
		}
	}
}
void Stack::peek(){
	int topelm=arr[top];
	cout<<"The Peek of Stack is "<<topelm<<endl;
}
int main(){
	Stack stack(5);
	int ch;
	
	while(ch!=5){
		cout<<"Select option to do Operation on Stack: "<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Display"<<endl;
		cout<<"4.Peek"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"Enter Choice: ";
		cin>>ch;
		switch(ch){
			case 1:stack.push();
				   break;
			case 2:stack.pop();
				   break;
			case 3:stack.display();
				   break;
			case 4:stack.peek();
				   break;
			case 5:cout<<"Exiting From Program..."<<endl;
					break;
			default:cout<<"Please Enter Proper choice "<<endl;
		}
	}
	return 0;	
}
