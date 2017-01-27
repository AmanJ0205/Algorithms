#include <stdio.h>

main()
{
    int a[]={1,3,10,9,8,7,6,4,2,0};

    int b=0, l=9, mid,n;
    mid= recur(a,b,l);

    printf("%d",mid);
    printf("\nEnter a no:");
    scanf("%d",&n);

    int pos1 = recu(a,b,mid,n);
    int pos2 = recu(a,mid,l,n);

    if(pos1<0)
    printf("%d",pos2+1);

    else
     printf("%d",pos1+1);


}
int recu(int a[],int b, int l,int n)
{
    int i,mid,t;

    if(a[b]<a[l])
        t=1;
    else
        t=2;

    while(b<l)
    {
        mid=(b+l)/2;

        if(a[mid]==n)
        {
            return mid;
        }

        else if(a[mid]<n)
        {
            if(t==1)
            {
            b=mid+1;
            }

            if(t==2)
            {
            l=mid-1;
            }
        }

        else if(a[mid]>n)
        {
           if(t==1)
            {
            l=mid-1;
            }

            if(t==2)
            {
            b=mid+1;
            }
        }
    }
return -1;
}

int recur(int a[],int b, int l)
{
    int mid;

    while(b<l)
    {
        mid=(b+l)/2;

        if(a[mid]>a[mid+1])
        {
            l=mid-1;
        }

        else if(a[mid]<a[mid+1])
        {
            b=mid+1;
        }
    }
return mid;
}
