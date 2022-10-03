#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;                       // data, *next structure members
    struct node *next;
};

void TraverseLL(struct node *head)
{
    struct node * ptr = head;
    do
    {
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    

}

int main()
{
    printf("------------Circular Linked-List Traversal------------\n");
    /* Initialize nodes */
    struct node *head;        
    struct node *second;
    struct node *mid;         
    struct node *third;
    struct node *fourth;

    /* Allocate memory */
    head = (struct node *)malloc(sizeof(struct node));  
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 13;     /* Assign data values */
    head->next = second; /* Connect nodes */

    second->data = 22;
    second->next = third;

    third->data = 25;
    third->next = fourth;

    fourth->data = 35;
    fourth->next = head;

    printf("Linked list elements are : \n");
    TraverseLL(head);

    return 0;
}
