#include<stdio.h>

int main()
{int arr[100];
 int MAX=1000000;
 printf("Enter elements(Less than 100 and in a sorted way)\n");
 int l,j,k,found=0,ch,in,i=0;
 do{printf("Enter new element\n");
  scanf("%d",&arr[i]);
  printf("Press 1 to enter more, 0 to stop\n");
  scanf("%d",&ch);
  i++;
  }while(ch!=0);
 for(j=i;j<100;j++)
 { arr[j]=MAX;}
 printf("Enter the no. you want to search\n");
 scanf("%d",&in);

 for(k=1;arr[k]!=MAX;k=2*k);
 int first=0,last=k,mid;
 while(first<=last)
 { mid=(first+last)/2;
   if(arr[mid]==in)
   {printf("The element that you entered is on %d position",mid);
    found=1;
    break;}
   else if(in<arr[mid])
     {last=mid-1;}
     else
     {first=mid+1;}
 }
  if(found==0)
  {printf("Sorry the element you entered is not there");     }
}
