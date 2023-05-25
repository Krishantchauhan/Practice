#include <iostream>
// #include <boost/multiprecision/cpp_int.hpp>

using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
node *head = NULL;
void disp(node *head)
{
    while (head != NULL)
    {
        printf(" %d \t", head->data);
        head = head->next;
    }
    printf("\n");
}

void beg1(node *&head, int x)
{
    node *newnode = new node(x);
    node *curr = head;
    if (curr == NULL)
        head = newnode;
    else
    {
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = newnode;
    }
}

int main()
{

    for (int i = 1; i < 7; i++)
    {
        beg1(head, i);
    }

    int m = 2, n = 4;

    node *curr1 = head, *prev1 = NULL;
    int pos = 0;

    while (pos < m - 1)
    {
        prev1 = curr1;
        curr1 = curr1->next;
        pos++;
    }

    // printf("%d ", prev1->data);

    node *curr2 = curr1, *prev2 = NULL;

    while (pos < n)
    {
        node *temp = curr1->next;
        curr1->next = prev2;
        prev2 = curr1;
        curr1 = temp;
        pos++;
    }

    printf("%d ", curr1->data);

    if (prev1 == NULL)
        head = prev2;
    else
        prev1->next = prev2;

    curr2->next = curr1;

    // disp(head);

    // return 0;
}
