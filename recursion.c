#include<stdio.h>
int rec(int x);
int main()
{
    int i=5;
    rec(5);

    return 0;
}

int rec(int x){
    if(x>0){
        rec(x-1);
        printf(" %d ",x);
        rec(x-2);
    }

return 0;
}
