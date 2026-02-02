#include <stdio.h>
int main(){
int n,digit=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0){
n=n/10;
digit=1+digit;
}
printf("the digits of elements:");
printf("%d",digit);
return 0;}