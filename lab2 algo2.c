#include<time.h>
#include<stdio.h>

main()
{
    int a[40]={54,3,54,7,888,9,0,54,3,2,6,7,8,9,9,9,0,3,54,7,167,3,34,456,68,668,678,676,678,434,23,234,456,56,7,34,567,189,54,14};
    //srand(time(NULL));
    //int p=a[rand()%(40)];
    int p=a[0];
    int i=0;
    for(i=0;i<40;i++)
    printf("%d ",a[i]);

    int s=0,r=0,t=39;
    int temp=0;

     while(s<=t)
     {
        if(a[s]<p)
        {
            temp = a[r];
            a[r]=a[s];
            a[s]=temp;
            ++r;++s;
        }

        if(a[s]==p)
        {
             ++s;

        }

        if(a[s]>p)
        {
             temp = a[t];
            a[t]=a[s];
            a[s]=temp;
            t--;
        }


     }
     printf("\n\n");
    for(i=0;i<40;i++)
    printf("%d ",a[i]);
}
