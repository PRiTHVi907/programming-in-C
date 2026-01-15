#include <stdio.h>
int main(){
    //entering no of elements
    int numsSize;
    printf("enter the no. of elements:");
    scanf("%d",&numsSize);

    int nums[numsSize],i;
    //storing in an array
    for(i=0;i<numsSize;i++){
        printf("enter number:");
        scanf("%d",&nums[i]);
    }
    
    int freq=0,num=0,tempfreq=0;
    for(num=0;num<=100;num++){
        int ttfreq=0;
        for(i=0;i<numsSize;i++){
            if (num==nums[i]){
                ttfreq++;
            }
        }
        if (ttfreq>tempfreq){
            tempfreq=ttfreq;
            freq=tempfreq;
        }
        else if(ttfreq==tempfreq){
            freq=freq+tempfreq;
        }
    }
    //printing the result
    printf("%d",freq);
    return 0;
}
    
