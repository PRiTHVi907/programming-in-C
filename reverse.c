#include <stdio.h>
int main(){
int n ,rev=0,digit;
printf("enter the number:");
scanf("%d",&n);
while(n!=0){
digit=n%10;
n=n/10;
rev=rev*10+digit;
}
printf("the reverse of elements:");
printf("%d",sum);
return 0;}