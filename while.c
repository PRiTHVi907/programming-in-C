#include <stdio.h>
int main(){
    int a;
    a=1;
    while(a%5!=0){
        printf("Enter number:");
        scanf("%d",&a);
    }
    printf("loop exited");
    return 0;
}