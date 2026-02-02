#include <stdio.h>
int main(){
int n ,prod=1,digit;
printf("enter the number:");
scanf("%d",&n);
while(n!=0){
digit=n%10;
n=n/10;
prod=prod*digit;
}
printf("the product of elements:");
printf("%d",prod);
return 0;}