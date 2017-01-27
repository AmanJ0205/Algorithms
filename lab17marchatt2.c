#include<stdio.h>
#include
void initiate(int  Arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
        Arr[i]=i;
}
int find2(int Arr[],int a,int b)
{
    if (Arr[a]=Arr[b])
    return 1;
    else
    return 0;
}
void union2(int Arr[],int n,int a,int b)
{
    int temp=Arr[a];
    int i;
    for (i=0;i<n;i++)
    {
        if (Arr[i]==temp)
            Arr[i]=Arr[b];
    }
}

int main()
{
    int x,y,z,j;
    int ar[5]={1,2,3,4,5};
    int br[5]={6,7,8,9,10};
    printf("Enter number of numbers you want:");
    scanf("%d",&j);
    x=initiate(ar,j);


}
