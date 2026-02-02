#include <stdio.h>
int main(){
    //entering no of elements
    int n;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    int a[n],i,key;
    //storing in an array
    for(i=0;i<n;i++){
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    //entering key 
    printf("enter the key:");
    scanf("%d",&key)

    //linear search
    for(i=0;i<n;i++){
        if(a[i]==key){
        printf("KEY found");
        break
        }
    }
    return 0;
}