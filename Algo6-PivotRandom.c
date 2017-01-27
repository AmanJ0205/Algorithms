#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i;
int division(int a[], int ls, int us)
{   srand(time(NULL));
    int r;
    r= ls + rand()%(us-ls+1);
    printf("\n%d",r);
  int pivot=a[r],ppos=r;
  int temp;
  while(ls<=us)
 { if(a[ls]>pivot)
 {  temp=a[ls];
   a[ls]=a[us];
   a[us]=temp;
   us--;
 }

if(a[ls]<pivot&& ls<ppos)
{
    ls++;
}

 if(a[ls]<pivot&& ls>=ppos)
 { temp=a[ls];
   a[ls]=a[ppos];
   a[ppos]=temp;
   ppos=ls;
   ls++;
   }
 if(a[ls]==pivot)
 { ls++;
 }}
  printf("\nThe sorted array is \n");
   for(i=0;i<20;i++)
  {printf("%d ",a[i]);
  }
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
}
