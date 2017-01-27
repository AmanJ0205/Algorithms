#include<stdio.h>

main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,12};
    int i=0;
    int j=9;
    int x;
    scanf("%d",&x);
    int flag = 1;

    while(i<j)
    {
        if(a[i]+a[j]==x)
        {
        printf("%d ,%d \n ",a[i],a[j] );
        flag=0;
        j--;
        }

        else if(a[i]+a[j] > x)
            {
                j--;
            }
        else
            {
                i++;
            }

    }
    if (flag==1)
        printf("no combination");
}
