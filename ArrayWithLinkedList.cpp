#include <stdio.h>
#define CAPACITY 3
int Array[CAPACITY];
int top = -1;
void insertVal(int val)
{
    
    {
        top = (top + 1) % CAPACITY;
        Array[top] = val;
        printf("Successfully add item : %d \n", val);
    }
}

void showArrayVAL()
{
    for (int i = 0; i < CAPACITY; i++)
    {
        printf("Top %d -> val %d .\n", i, Array[i]);
    }
}

int main()
{
    insertVal(10);
    insertVal(20);
    insertVal(30);
    insertVal(40);

    showArrayVAL();
    return 0;
}