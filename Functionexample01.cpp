#include<stdio.h>

int multiply(int , int);

int main(){
    int i,j,result;
    printf("Please enter two numbers you want to multiply...");
    scanf("%d%d",&i,&j);

    result = multiply(i,j);
    printf("The result of multiplication is : %d",result);
return 0;
}

int multiply(int a,int b){
    return (a*b);
}
