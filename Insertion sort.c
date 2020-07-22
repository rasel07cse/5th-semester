#include<stdio.h>
int main()
{
    int n,i,j,k,temp;
    printf("Enter array length :");
    scanf("%d",&n);
    printf("Enter unsorted number :");
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=1;i<n-1;i++){
           int j=i-1;
           temp =array[i];
        while(j>=0 && array[j]>temp){

                array[j+1]=array[j];
                j--;
            }
            array[j+1]=temp;
        }
        printf("\nStep: %d\n",i);
        for(k=0;k<n;k++){
            printf("%d ",array[k]);
        }

    printf("\nThe sorted number :");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}

