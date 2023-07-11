#include <stdio.h>
#include <stdlib.h>
void append();
void insert_beg(int x);
void insert_last(int y);
void Insert(int a, int val, int pos);
void display();
int count();
void del_beg();
void del_end();
void del(int count, int pos);
void search(int se);
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;

void reverse(node *curr, node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    reverse(curr->next, curr);
    curr->next = prev;
}

void dup(node *head)
{
    node *curr = head;
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
            curr->next = curr->next->next;
        else
            curr = curr->next;
    }
}

void d(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

node *cr(node *n, int x)
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = x;
    newnode->next = 0;
    if (n == 0)
    {
        return newnode;
    }
    else
    {
        node *temp = n;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    return n;
}

void split(node *head)
{
    node *curr = head;
    node *p = NULL;
    node *q = NULL;
    int i = 1;
    while (curr != NULL)
    {
        if (i % 2 == 0)
        {
            p = cr(p, curr->data);
            curr = curr->next;
            i++;
        }
        else
        {
            q = cr(q, curr->data);
            curr = curr->next;
            i++;
        }
    }
    display(p);
    d(q);
}

int main()
{
    int x, ch, y, pos, val, a, p, q, se;
    node *newnode;
    printf("\n Name:Krishant Chauhan\n course:MCA 2A\n Class Roll no.:-32\n Single Linked List Program\n");
    while (1)
    {
        printf("\n1.Append\n2.Display\n3.Count Node\n4.Insert At Begning\n5.Insert at End\n6.Insert at Nth Postion\n7.Delete From Begning\n8.Delete From End\n9.Delete at nth Position\n10.Search the Element\n11.Exit\n");
        printf("\nEnter your choice\n ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            append();
            break;
        case 2:
            printf("Data in List\n");
            display();
            break;
        case 3:
            a = count();
            break;
        case 4:
            printf("Enter the data to Insert at the Begning\n");
            scanf("%d", &x);
            insert_beg(x);
            break;
        case 5:
            printf("Enter the data to Insert at the End\n");
            scanf("%d", &y);
            insert_last(y);
            break;
        case 6:
            printf("Enter the postion \n");
            scanf("%d", &pos);
            printf("Enter the data \n");
            scanf("%d", &val);
            Insert(a, val, pos);
            break;
        case 7:
            del_beg();
            break;
        case 8:
            del_end();
            break;
        case 9:
            printf("Enter the postion \n");
            scanf("%d", &p);
            del(a, p);
            break;
        case 10:
            printf("Enter the Element to find\n");
            scanf("%d", &se);
            search(se);
            break;
        case 11:
            exit(1);
        case 12:
            reverse(head, NULL);
        case 13:
            dup(head);
        case 14:
            split(head);
        default:
            printf("Enter correct Option\n");
        }
    }
}

void display()
{
    node *temp;
    temp = head;
    if (temp == 0)
    {
        printf("List is Empty\n");
    }
    else
    {
        while (temp != 0)
        {
            printf("Data is: %d\n", temp->data);
            temp = temp->next;
        }
    }
}
int count()
{
    int count = 0;
    node *temp;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    printf("Total Number of Nodes are : %d\n", count);
    return count;
}
void append()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("Enter the data of node :\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        node *temp;
        temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void insert_beg(int data)
{
    node *newnode, *temp;
    newnode = (node *)malloc(sizeof(node));
    if (newnode == 0)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        temp = head;
        head = newnode;
        newnode->data = data;
        newnode->next = temp;
    }
    printf("Successfully Inserted at Begning\n");
}
void insert_last(int y)
{
    node *temp, *newnode;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = y;
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    printf("Successfully Inserted at Ending\n");
}
void Insert(int a, int val, int pos)
{
    node *temp, *newnode;
    int i = 1;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = val;
    if (pos == 1)
    {
        insert_beg(val);
    }
    if (pos > a)
        printf("Invalid Postion\n");
    else
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    printf("Successfull Incerted at %dth Position\n", pos);
}
void del_beg()
{
    // node *beg;
    if (head == 0)
    {
        printf("Not Possible ");
    }
    head = head->next;
    printf("Successfully Decremented from the Begning\n");
}
void del_end()
{
    node *temp, *prev_node;
    temp = head;
    while (temp->next != 0)
    {
        prev_node = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
        printf("Empty\n");
    }
    prev_node->next = 0;
    free(temp);
    printf("Successfully Decremented from the Ending\n");
}
void del(int count, int pos)
{
    node *temp, *store;
    temp = head;
    int i = 1;
    if (pos > count)
        printf("Invalid Postion\n");
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    store = temp->next;
    temp->next = store->next;
    free(store);
    printf("Successfully Decremented %d Position\n", pos);
}
void search(int se)
{
    node *temp, *da;
    temp = head;
    int i = 0;
    while (temp != 0)
    {
        if (temp->data == se)
        {
            i++;
        }
        temp = temp->next;
    }
    if (i == 1)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
}
