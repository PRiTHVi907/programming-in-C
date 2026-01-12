#include <stdio.h>
int main(){
    //entering no.
    int n;
    printf("enter the no.:");
    scanf("%d",&n);
    int isPrime=1,i;
    //incrementation
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    //evaluvation of flag
    if(isPrime && num>1){
        printf("it is a prime number")
    }
    else{
        printf("it is NOT a prime number")
    }
    return 0;
}