#include<stdio.h>
struct list{
    int info;
    struct list *next;
};

int main(){
    int srch;
    printf("Enter the value you wanna search: ");
    scanf("%d",&srch);

    struct list *p,*q,*t;
    int x,y;
    p=new list;
    printf("\nEnter the first value: ");
    scanf("%d",&p->info);

    printf("\nEnter next value: ");
    scanf("%d",&x);

    q=p;
    while(x>0){
        t=new list;
        t->info=x;
        q->next=t;
        q=t->next;
        printf("\nEnter next value: ");
        scanf("%d",&x);
    }
    q->next=NULL;

    q=p;

    printf("\nThe list contains.............\n\n");
    while( q!=srch && q!=NULL){
        q=q->next;
    }
    if(p=srch) printf("  value is found  ");
    else printf("  value is not found  ");
}

