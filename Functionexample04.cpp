#include<stdio.h>
int getInteger();

int main(){
    int n,i,flag=0;
    n=getInteger();

    for(i=2;i<=n/2;++i){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d is not a Prime number.",n);
    }
    else printf("%d is a Prime number.",n);
return 0;
}

int getInteger(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
return n;
}
