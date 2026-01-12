#include <stdio.h>
int main(){
    //entering no of elements
    int n;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    int a[n],i;
    //storing in an array
    for(i=0;i<n;i++){
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    //moving the largest to a right n times
    int n0,n1;
    for(i=0;i<n;i++){
        for(i=0;i<n-1;i++){
            n0=a[i];
            n1=a[i+1];
            if(n0>n1){
                a[i+1]=n0;
                a[i]=n1;
            }
        }
    }
    //printing the sorted array
    printf("[");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(",");
    }
    printf("\b]");
    return 0;
}