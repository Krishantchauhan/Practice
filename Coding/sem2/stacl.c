#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
} node;

node *head;

void push()
{
    node *nn = (node *)malloc(sizeof(node));
    printf("Enter the data\n");
    scanf("%d", &nn->data);
    nn->next = 0;
    nn->next = head;
    head = nn;
}

void pop()
{
    printf("poped %d\n", head->data);
    node *temp = head;
    head = head->next;
    free(temp);
}

void disp()
{
    node *temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void main()
{
    push();
    push();
    push();
    disp();
    pop();
    disp();
    pop();
}