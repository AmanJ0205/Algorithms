#include<stdio.h>

int main()
{int arr[6]={4,6,17,23,30,50};
 int i=0,j=5,sol=0,k;
 printf("Enter k \n");
 scanf("%d",&k);
 while(i<=j)
 { if(arr[i]+arr[j]==k)
   {printf("The two numbers that add up to %d are %d and %d",k,arr[i],arr[j]);
    sol=1;
    break;}
   else if(arr[i]+arr[j]<k)
         {i++;}
          else
          {j--;}
 }

 if(sol==0)
 {printf("No two numbers of the array add up to %d",k);}
 }
