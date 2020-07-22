#include<stdio.h>
int main(){
    int i,n,array[50],x;
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
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(array[i]==x){
            printf("\n Value found\n");
            printf("\nindex of searching value: %d\n",i);
            break;
        }
    }
return 0;
}
