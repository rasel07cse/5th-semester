#include<stdio.h>
void checkPrimeNumber();

int main(){
    checkPrimeNumber();
return 0;}

void checkPrimeNumber(){

    int n,i,flag=0;
    printf("Enter a positive: ");
    scanf("%d",&n);

    for(i=2;i<=n/2;++i){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==1)printf("%d is not prime number.",n);
    else printf("%d is a prime number.",n);
}
