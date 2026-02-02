#include <stdio.h>
int main(){
int n ,sum=0,digit;
printf("enter the number:");
scanf("%d",&n);
while(n!=0){
digit=n%10;
n=n/10;
sum=sum+digit;
}
printf("the sum of elements:");
printf("%d",sum);
return 0;}