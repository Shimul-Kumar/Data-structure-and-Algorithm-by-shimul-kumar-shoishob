#include <stdio.h>
#define CAPACITY 3
int circularQueue[CAPACITY];
int front = 0, rear = -1;

void enqueue(int item)
{
    if (rear < CAPACITY - 1)
    {
        rear++;
        circularQueue[rear]=item;
        printf("Successfully add item: %d \n", item);
    }
    else
    {
        printf("Exception, the queue is full.\n");
    }
}

int dequeue()
{
    if (rear >= 0)
    {
        int val = circularQueue[front];
        front = (front + 1) % CAPACITY;
        return val;
    }
    else
    {
        printf("Exception, the queue is empty.\n");
        return -1;
    }
}

int main()
{
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("dequeue item : %d \n", dequeue());
    enqueue(50);
    printf("rear: %d, front:%d \n", rear, front);
    printf("dequeue item : %d \n", dequeue());
    printf("rear: %d, front:%d \n", rear, front);
    printf("dequeue item : %d \n", dequeue());
    printf("rear: %d, front:%d \n", rear, front);


    return 0;
}