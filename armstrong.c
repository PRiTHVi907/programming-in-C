#include <stdio.h>
#include <math.h>
int main() {
    int num,digit,c=0,temp,arm;
    printf("ENTER the number:");
    scanf("%d",&num);
    temp=num;
    //no of digits
    while(num>1){
        digit=num%10;
        c=c+1;
        num=num/10;
    }
    num=temp;
    //converting to a armstrong number
    while(num>1){
        digit=num%10;
        arm=arm+ pow(digit,c);
        num=num/10;
    }
    //evaluation of the number
    if (temp==arm){
        printf("the number is an armstrong number");
        
    }
    else{
        printf("the number is NOT an armstrong number");
    }
}