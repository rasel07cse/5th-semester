#include<stdio.h>

int main(){
    int n,n1,A[50],B[50],count=0,notF=0;

    printf("Enter how many elements you want at 1st array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    printf("Enter how many elements you want at 2nd array: ");
    scanf("%d",&n1);

    for(int i=0;i<n1;i++){
        scanf("%d",&B[i]);
    }

    for(int i=0;i<n;i++){
        if(A[i] == B[i]){
            printf("The elements is match.\n");
        }
        else printf("The elements are not match\n");
        }

    printf("\n\nThe match value %d and not match value %d\n",count,notF);

return 0;
}

