#include <stdio.h>

int sort(int a[])
{
  int count=0;
  bool repeat = true;
  for(int i=0;i<5;i++)
  {
    repeat = true;
    for(int j=i;j>=0;j--)
    {
      if (a[i+1]==a[j])
      {
        repeat = false;
        break;
      }
    }
    if (repeat==true)
      count++;
  }
  return count;
}

int main()
{
  int a[5]={10,30,30,30,50};

  int x=sort(a);
  printf("%d",x);
}
