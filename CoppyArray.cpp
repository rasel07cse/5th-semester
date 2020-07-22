#include<stdio.h>

int main(){
    int n,source[50],dest[50];

    printf("Enter how many elements you want.");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&source[i]);
    }

    for(int i=0;i<n;i++){
        dest[i]=source[i];
    }

    printf("The value of array: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",source[i]);
    }
    printf("The value of coppy array: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",dest[i]);
    }

return 0;
}
