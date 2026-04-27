#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1, rear = -1;

int isFull()
{
    return (rear + 1) % MAX_SIZE == front;
}

int isEmpty()
{
    return front == -1;
}

void enqueue()
{
    int data;
    printf("\nEnter element: ");
    scanf("%d", &data);

    if (isFull())
    {
        printf("Queue overflow\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = data;

    printf("Element %d inserted\n", data);
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue underflow\n");
        return;
    }

    int data = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
         front = (front + 1) % MAX_SIZE;
    }

    printf("Deleted element: %d\n", data);
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;

    while (i != rear)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX_SIZE;
    }

    printf("%d\n", queue[rear]);
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n\nQueue Operations:");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice, try again\n");
        }
    }
}
