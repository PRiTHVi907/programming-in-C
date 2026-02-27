#include <stdio.h>

int fct(int num) {
    //read no
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
void main() {
    int n,c,r,ncr;
    printf("select n c r:");
    scanf("%d %d",&n,&r);
    ncr=fct(n)/(fct(n-r)*fct(r));
    printf("%d",ncr);
}