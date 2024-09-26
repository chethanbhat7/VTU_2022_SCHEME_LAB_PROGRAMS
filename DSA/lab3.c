#include<stdio.h>
#include<stdlib.h>

int size,f,top=-1,ele,k,i,stack[6],rev[6];
char choice;
void push();
void pop();
void display();
int pali();

void main()
{
	printf("Enter the size of the stack\n");
	scanf("%d",&size);
	printf("-----MENU-----\np.PUSH d.POP e.DISPLAY l.check for PALINDROME E.EXIT\n");
	while(1)
	{
		printf("Enter the choice :");
		scanf("%c",&choice);
		switch(choice)
		{
			case('p'):push();
				break;
			case('d'):pop();
				break;
			case('e'):display();
				break;
			case('l'):f=pali();
				if(f==1)
					printf("It's PALINDROME\n");
				else
					printf("It's NOT PALINDROME\n");
				break;
			case('E'):exit(0);
			default:printf("Wrong Choice\n");
		}
	}
}
void push()
{
	 if(top==size-1)
	 {
	 	printf("Stack is Overflow\n");
	 }
	 else
	 {
	 	printf("Enter the element\n");
	 	scanf("%d",&ele);
	 	top=top+1;
	 	stack[top]=ele;
	 }
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is underflow\n");
	}
	else
	{
		ele=stack[top];
		printf("Popped element is %d\n",ele);
		top--;
	}		
}
void display()
{
	if(top==-1)
	{
		printf("Stack is underflow\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d \n",stack[i]);
		}
	}	
}
int pali()
{
	int flag=1;
	for(i=top;i>=0;i--)
	{
		rev[k++]=stack[i];
	}
	for(i=top;i>=0;i--)
	{
		if(stack[i]!=rev[--k])
		{
			flag=0;
		}
	}
	return flag;	
}
			
			
