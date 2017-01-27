//#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
int min(int a, int b)
{
    return (a<b)? a: b;
}
int binomialCoeff(int n, int k)
{
    int C[k+1];
    memset(C, 0, sizeof(C));
    int i,j;
    C[0] = 1;

    for (i = 1; i <= n; i++)
    {

        for (j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }
    return C[k];
}
int main()
{
    int n = 10, k = 2;
    printf ("Value of C(%d, %d) is %d ",
            n, k, binomialCoeff(n, k) );
    return 0;
}
