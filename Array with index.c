#include<stdio.h>
int main(){
    int i,n,array[50],searchValue;
    printf("How many input for array ?\n");
    scanf("%d",&n);
    printf("\n please enter %d values : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nThe entered values:\n");
    for(i=0;i<n;i++){
        printf("%d \n",array[i]);
    }
    printf("\nPlease enter searching value: ");
    scanf("%d",&searchValue);

    int count=0;
    for(i=0;i<n;i++){
        if(searchValue==array[i]){
            count++;
        }
    }
    if(count==0){
        printf("\nNot Found");
    }
    else{
        printf("\nValue Found at %d times\n",count);
    }

return 0;
}
