#include<stdio.h>
void main()
{
  int even=0;

  for(int i=0;i<50;i++)
  {
    if (i%2==0)
    {
      even++;
    }
  }

  while (i<=50)
  {
    if (i%2==0)
    {
      even++;
    }
    i++;
  }

  printf("%d",even);
}
