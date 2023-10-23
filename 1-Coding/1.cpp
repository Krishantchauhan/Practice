// #include <iostream>
// // #include <boost/multiprecision/cpp_int.hpp>

// using namespace std;

// struct node
// {
//     int data;
//     node *next;
//     node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };
// node *l1 = NULL;
// node *l2 = NULL;
// void disp(node *head)
// {
//     while (head != NULL)
//     {
//         printf(" %d \t", head->data);
//         head = head->next;
//     }
//     printf("\n");
// }

// void beg1(node *&l1, int x)
// {
//     node *newnode = new node(x);
//     node *curr = l1;
//     if (curr == NULL)
//         l1 = newnode;
//     else
//     {
//         while (curr->next != NULL)
//             curr = curr->next;
//         curr->next = newnode;
//     }
// }

// void beg2(node *&l2, int x)
// {
//     node *newnode = new node(x);
//     node *curr = l2;
//     if (curr == NULL)
//         l2 = newnode;
//     else
//     {
//         while (curr->next != NULL)
//             curr = curr->next;
//         curr->next = newnode;
//     }
// }

// node *zero(node *head)
// {
//     if (head != NULL and head->data == 0)
//     {
//         return zero(head->next);
//     }
//     else
//     {
//         return head;
//     }
// }

// // 1 2 3 4
// int main()
// {
//     //     19
//     // 8 1 2 6 9 2 0 1 5 3 6 4 3 5 1 2 3 6 7
//     // 20
//     // 9 1 4 3 5 1 7 4 5 6 6 2 3 8 3 9 1 1 2 2

//     // beg1(l1,8);
//     // beg1(l1,1);
//     // beg1(l1,2);
//     // beg1(l1,6);
//     // beg1(l1,9);
//     // beg1(l1,2);
//     // beg1(l1,0);
//     // beg1(l1,1);
//     // beg1(l1,5);
//     // beg1(l1,3);
//     // beg1(l1,6);
//     // beg1(l1,4);

//     int x;
//     for (int i = 0; i < 19; i++)
//     {
//         scanf("%d", &x);
//         beg1(l1, x);
//     }
//     int y;
//     for (int i = 0; i < 20; i++)
//     {
//         scanf("%d", &y);
//         beg1(l2, y);
//     }

//     long long a1 = 0;
//     // long long a2 = 0;
//     unsigned long long int a2 = 0;

//     // l1 = zero(l1);
//     // l2 = zero(l2);

//     node *curr1 = l1;
//     node *curr2 = l2;

//     while (curr1 != NULL)
//     {
//         a1 = a1 * 10 + curr1->data;
//         curr1 = curr1->next;
//     }
//     // printf("A1%lli \n", a1);

//     while (curr2 != NULL)
//     {
//         a2 = a2 * 10 + curr2->data;
//         curr2 = curr2->next;
//     }
//     // printf("A2 :-%lli \n", a2);

//     long long sub = 0;

//     printf("A1 : %lli \n", a1);
//     printf("A2 : %lli \n", a2);
//     if (a1 > a2)
//         sub = a1 - a2;
//     else
//         sub = a2 - a1;

//     printf("Sub : %lli \n", sub);

//     node *head = NULL;
//     int i = 0;
//     while (sub > 0)
//     {
//         int rem = sub % 10;
//         node *nn = new node(rem);
//         node *curr = head;
//         if (head == NULL)
//             head = nn;
//         else
//         {
//             nn->next = head;
//             head = nn;
//         }
//         sub = sub / 10;
//         // disp(h1);
//         // disp(head);
//     }
//     // printf("%d", i);

//     // node *curr = h1;
//     // if (h1 == NULL)
//     //     printf("Empty LL");
//     // else
//     // {
//     //     while (curr->next->next != NULL)
//     //         curr = curr->next;
//     //     curr->next = NULL;
//     // }

//     disp(head);

//     // return 0;
// }
