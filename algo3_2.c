#include <stdio.h>

main()
{
    int a[]={12,14,16,18,19,4,6,8,9,10};

    int b=0, l=9, dip,n;
    dip= recur(a,b,l);

    printf("%d",dip);
    printf("\nEnter a no:");
    scanf("%d",&n);

  int pos1 = recu(a,b,dip-1,n);
    int pos2 = recu(a,dip,l,n);

    if(pos1<0)
    printf("%d",pos2+1);

    else
     printf("%d",pos1+1);


}
int recu(int a[],int b, int l,int n)
{
    int i,mid,t;

    while(b<=l)
    {
        mid=(b+l)/2;

        if(a[mid]==n)
        {
            return mid;
        }

        else if(a[mid]<n)
        {
            b=mid+1;
        }

        else if(a[mid]>n)
        {
            l=mid-1;
        }
    }
return -1;
}

int recur(int a[],int b, int l)
{
    int mid;

    while(b<=l)
    {
        mid=(b+l)/2;

        if(a[mid]<a[0])
        {
            l=mid-1;
        }

        else if(a[mid]>a[0])
        {
            b=mid+1;
        }
    }
return mid;
}
