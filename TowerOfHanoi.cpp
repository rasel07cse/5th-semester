#include<stdio.h>
int count =0;

int THanoi(int n,char s,char a,char d);

int main(){
    int n;
    printf("Enter how many disk: ");
    scanf("%d",&n);
    THanoi(n,'S','A','D');
    printf("\n\nTotal Movement: %d \n\n",count);
return 0;
}

int THanoi(int n,char s,char a,char d){
    if(n==1){
        printf("\nMove disk %d from %c to %c.",n,s,d);
        count++;
    }
    else{
        THanoi((n-1),s,d,a);
        printf("\nMove disk %d from %c to %c.",n,s,d);
        count++;
        THanoi((n-1),a,s,d);
    }
return 0;
}
