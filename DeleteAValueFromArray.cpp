#include<stdio.h>

int main(){
    int n,arr[50],position,i;

    printf("Enter how many elements you want.");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the location where you wish to delete value.");
    scanf("%d",&position);

    if(position>=n+1) printf("Deletion is not posible.\n");
    else{
        for(i=position-1;i<n-1;i++) arr[i]=arr[i+1];

        printf("Resultant array: \n");

        for(i=0;i<n-1;i++) printf("%d\n",arr[i]);
    }

    return 0;
}
