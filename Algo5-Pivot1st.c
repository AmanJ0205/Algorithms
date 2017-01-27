#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int swap,comp;
int division(int a[], int ls, int us)
{
  int pivot=a[ls],ppos=ls;
  int temp;
  while(ls<=us)
 { if(a[ls]>pivot)
 {  temp=a[ls];
   a[ls]=a[us];
   a[us]=temp;
   us--;
   swap++;
   comp++;
 }

 if(a[ls]<pivot)
 { temp=a[ls];
   a[ls]=a[ppos];
   a[ppos]=temp;
   ppos=ls;
   ls++;
   comp++;
   }

 if(a[ls]==pivot)
 { ls++;
  comp++;
 }}
return ppos;
}
int quicksort(int a[], int ls, int us)
{ if(ls>us)
   return;
  int ppos;
  ppos=division(a,ls,us);
  quicksort(a,ls,ppos-1);
  quicksort(a,ppos+1,us);


}
void main()
{ int a[20],x,r,i,j,temp;
  for(i=0;i<20;i++)
  { a[i]=i+1;
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

  int ls,us;
  ls=0;
  us=19;

  quicksort(a,ls,us);

  printf("\nThe sorted array is \n");
   for(i=0;i<20;i++)
  {printf("%d ",a[i]);
  }
printf("The no. of swaps= %d and no. of comparisions= %d",swap,comp);
}
