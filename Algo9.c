#include<stdio.h>
int bsei(int f, int l, int x, int a[]);
int bsed(int f, int l, int x, int a[]);
main(){
int a[10]={5,4,1,2,3,6,7,8,9,10},i,pos1,pos2,peak,mid,n,first,last;

 first=0;
 last=9;

        while(first<=last){
          mid=(first+last)/2;
            if(a[mid]<=a[mid+1]&& a[mid]<=a[mid-1]){
                peak=mid;
                break;
            }
            if(a[mid]>=a[mid-1]&& a[mid]<=a[mid+1]){
                last=mid-1;
            }
            if(a[mid]>=a[mid+1]&& a[mid]<=a[mid-1]){
                first=mid+1;
            }
         }
printf("peak at %d",peak);
printf("Enter element to search:");
scanf("%d",&n);

pos1=bsei(0,peak,n,a);
pos2=bsed(peak-1,9,n,a);

    if(pos1==-1&& pos2==-1){
        printf("\nElement not found");
    }
    if(pos1==-1&& pos2!=-1){
        printf("\nElement found at %d",pos2);
    }
    if(pos2==-1&& pos1!=-1){
        printf("\nElement found at %d",pos1);
    }
getch();
}

int bsei(int f, int l, int x, int a[])
{
int i,mid;
         while(f<=l){
            mid=(f+l)/2;
            //printf("%d\n",a[mid]);
              if(a[mid]==x){
                return mid;
              }
              if(x<a[mid]){
                f=mid+1;
              }
              if(x>a[mid]){
                l=mid-1;
              }
        }
        return -1;
}

int bsed(int f, int l, int x, int a[])
{
int i,mid;
         while(f<=l){
            mid=(f+l)/2;
           // printf("%d\n",a[mid]);
              if(a[mid]==x){
                return mid;
              }
              if(x<a[mid]){
                l=mid-1;
              }
              if(x>a[mid]){
                f=mid+1;
              }
        }
        return -1;
}
