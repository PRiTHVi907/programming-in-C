#include <stdio.h>
int main(){
    int numsSize;
    printf("enter no of elements in array:");
    scanf("%d",&numsSize);
    int nums[numsSize],i,j;
    //storing <<array>> 
    for(i=0;i<numsSize;i++){
        printf("enter number:");
        scanf("%d",&nums[i]);
    }
    //zero elements
    if (numsSize == 0){
        printf("zero elements!!");
        return 0;
    }
    //distinct elements
    i = 0;
    for (j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    //output
    printf("there are ");
    printf("%d",i+1);
    printf(" distinct elements\n");

    printf("[");
    for(j=0;j<i+1;j++){
        printf("%d",nums[j]);
        printf(",");
    }
    printf("\b]");
}