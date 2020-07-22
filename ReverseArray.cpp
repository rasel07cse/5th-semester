#include<stdio.h>

int main(){
    int a[50],n,rev[50];
    printf("Enter how many number you want to entered : ");
    scanf("%d",&n);
    printf("Now enter %d elements:\n",n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int i,j;
    for(i=n-1,j=0;i>=0;i--,j++){
        rev[j]=a[i];
    }
    printf("The reverse array is: \n");
    for(i=0;i<n;i++){
        printf("%d\n",rev[i]);
    }


return 0;
}

int rev(int rev[50]){

return 0;
}
