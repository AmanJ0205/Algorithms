#include<stdio.h>
int bse(int f, int l, int x, int a[]);
main(){
int a[10]={4,5,6,7,8,9,11,1,2,3},i,pos1,pos2,min,mid,n,first,last;
 first=0;
 last=9;
        while(first<=last){
                mid=(first+last)/2;
            if(a[mid]<a[mid+1]&&a[mid]< a[mid-1]){
                min=mid;
                break;
            }
            if(a[first]> a[mid]){
                last=mid-1;
            }
            if(a[first]<a[mid]){
                first=mid+1;
            }
         }


printf("Enter element to search:");
scanf("%d",&n);



pos1=bse(0,min-1,n,a);
pos2=bse(min,9,n,a);

    if(pos1==-1&&pos2==-1){
        printf("\nElement not found");
    }
    if(pos1==-1&&pos2!=-1){
        printf("\nElement found at %d",pos2);
    }
    if(pos2==-1&&pos1!=-1){
        printf("\nElement found at %d",pos1);
    }
getch();
}

int bse(int f, int l, int x, int a[]){
int i,mid;
         while(f<=l){
            mid=(f+l)/2;
              if(a[mid]==x){
                return mid;
              }
              if(x>a[mid]){
                f=mid+1;
              }
              if(x<a[mid]){
                l=mid-1;
              }
        }
        return -1;
}
