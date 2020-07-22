#include<stdio.h>
int main(){
    int i,n,m,array1[50],array2[50];
    printf("How many input for array 1 ?\n");
    scanf("%d",&n);
    printf("\nPlease enter %d values : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    printf("\nThe entered first values:\n");
    for(i=0;i<n;i++){
        printf("%d \n",array1[i]);
    }
    printf("How many input for array 2 ?\n");
    scanf("%d",&m);
    printf("\nPlease enter %d values : \n",m);
    for(i=0;i<m;i++){
        scanf("%d",&array2[i]);
    }
    printf("\nThe entered second values:\n");
    for(i=0;i<n;i++){
        printf("%d \n",array2[i]);
    }
    // merge
    int j=0;
    for(i=0;i<n+m;i++){
            array1[i]=array2[j];
            j++;
    }
    printf("\nMerge Array: ");
    for(i=0;i<n+m;i++){
       printf("%d\n",array1[i]);
       }
return 0;
}
