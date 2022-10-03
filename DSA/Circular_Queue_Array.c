#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void enqueue();
void dequeue();
void display();
int queue[maxsize];
int front=-1, rear=-1;

int main()
{
    printf("-----------------Circular Queue using array-----------------\n");
    int choice;
    while (1)
    {
        printf("\nChoose an option : \t 1.enqueue\t 2.dequeue\t 3.display\t 4.exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
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
            printf("Enter a valid choice : \n");
            break;
        }
    }
    return 0;
}

void enqueue()
{
    if (front==(rear+1)%maxsize)
        {
            printf("Queue is overflow\n");
        }
    else 
    {
        if (front==-1 && rear==-1)
            {
                front=0;
                rear=0;
            }
        else
            {
                rear=(rear+1)%maxsize;
            }
        printf("Enter the element : ");
        scanf("%d", &queue[rear]);
    }   
}

void dequeue()
{
    if (front==-1 && rear==-1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%maxsize;
        }
        printf("Deleted item is : %d\n", queue[front]);               
    }
}

void display()
{
    if (front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are : \n");
        for (int i = front; i <=rear ; i++)
        {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
    
}






