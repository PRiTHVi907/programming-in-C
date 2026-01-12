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
    //printing the array
    printf("[");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(",");
    }
    printf("\b]");
    return 0;
}