#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int item)
{
    if (top < CAPACITY - 1)
    {
        top++;
        stack[top] = item;
        printf("Successfully add item : %d \n", item);
    }
    else
    {
        printf("Exception, Have no space in the stack.\n");
    }
}
int peek()
{
    if(top>=0)
    {
        int stackVal = stack[top];
        return stackVal;
    }
    else
    {
        printf("Exception, Empty stack from peek().\n");
        return -1;
    }
}
int pop()
{
    if(top>=0)
    {
        int stackVal = stack[top];
        top--;
        return stackVal;
    }
    else
    {
        printf("Exception, Empty stack From pop().\n");
        return -1;
    }

}

int main()
{
    printf("Here my stack file is ready to work :)\n");

    peek();
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    printf("Stack value with peek : %d \n",peek());
    printf("Stack value with pop : %d \n",pop());
    push(50);
    push(60);
    printf("Stack value with peek : %d \n",peek());
    

}