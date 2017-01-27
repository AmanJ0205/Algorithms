#include <stdio.h>

main()
{
    int a[]={1,2,4,8,12};
    int b[]={3,5,16,19,20};
    int c[]={6,7,9,10,11};

    int x=0,y=0,z=0;

while(x<5||y<5||z<5)
{
    if(a[x]<b[y] || b[y]<c[z])
    {
        if(a[x]<c[z])
            printf("%d  ",a[x++]);
        else
            printf("%d  ",c[z++]);
    }

    else if(b[y]<c[z])
    {
     if(b[y]<a[x])
            printf("%d  ",b[y++]);
        else
            printf("%d  ",a[x++]);
    }

    else if (c[z]<a[x])
    {
     if(c[z]<b[y])
            printf("%d  ",c[z++]);
        else
            printf("%d  ",b[y++]);
    }

}

}

