#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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
 int pivot=a[0],ls=0,us=19,ppos=0;
 printf("Pivot element is %d",a[0]);
 while(ls<=us)
 { if(a[ls]>pivot)
 {  temp=a[ls];
   a[ls]=a[us];
   a[us]=temp;
   us--;
 }
 if(a[ls]<pivot)
 { temp=a[ls];
   a[ls]=a[ppos];
   a[ppos]=temp;
   ppos=ls;
   ls++;
   }
 if(a[ls]==pivot)
 { ls++;
 }}
 printf("\nThe kinda sorted array is \n");
for(i=0;i<20;i++)
  {printf("%d ",a[i]);
  }
}
