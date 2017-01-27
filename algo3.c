#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{ int a[20],x,r,i,j,temp;
  for(i=0;i<20;i++)
  { a[i]=i+1;
  }
  printf("The original array is\n");
  for(i=0;i<20;i++)
  {
      printf("%d ",a[i]);
  }
  srand(time(NULL));
  for(j=19;j>0;j--)
  {

    r=rand();
    x=r%j;
    temp=a[j];
    a[j]=a[x];
    a[x]=temp;
    }
    printf("\n\nThe random array is \n");
  for(i=0;i<20;i++)
  {printf("%d ",a[i]);
  }
}
