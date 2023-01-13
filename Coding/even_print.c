#include<stdio.h>
void main()
{
  int even=0;
  int i=1;
  int a=50;

  // for(int i=0;i<50;i++)
  // {
  //   if (i%2==0)
  //   {
  //     printf("%d \t",i);
  //   }
  // }

  while (i<=50)
  {
    if (i%2==0)
    {
      even++;
      printf("%d \t",i);
    }
    i++;

  }


}
