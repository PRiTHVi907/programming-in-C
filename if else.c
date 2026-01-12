#include <stdio.h>
int main() {
int marks;
printf("enter number");
scanf("%d",&marks);
if (marks>=90&&marks<=100){
printf("your grade is s");}
else if (marks>=80&&marks<=90){
printf("your grade is a");}
else if (marks>=70&&marks<=80){
printf("your grade is b");}
else if (marks>=60&&marks<=70){
printf("your grade is c");}
else if (marks>=50&&marks<=60){
printf("your grade is d");}
else if (marks>=40&&marks<=50){
printf("your grade is e");}
else{printf("you have succefully failed");}
return 0;}