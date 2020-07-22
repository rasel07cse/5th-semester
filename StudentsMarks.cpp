#include<stdio.h>
struct number{
char name[50];
int id;
int ct,assignment,attendance,finalExam,mid;
};
int main(){
    printf("Enter the Number of Students: ");
    int n;
    scanf("%d",&n);
    struct number student[n];
    int sum[n];
    for(int i=1;i<=n;i++){
        sum[i]=0;
        printf("Enter Name for student %d\n",i);
        printf("Enter Name: ");
        scanf("%s",&student[i].name);
        printf("Enter ID\n");
        scanf("%d",&student[i].id);
        printf("Enter Mid Number\n");
        scanf("%d",&student[i].mid);
        sum[i]+=student[i].mid;
        printf("Enter ct Number\n");
        scanf("%d",&student[i].ct);
        sum[i]+=student[i].ct;
        printf("Enter assignment Number\n");
        scanf("%d",&student[i].assignment);
        sum[i]+=student[i].assignment;
        printf("Enter attendance Number\n");
        scanf("%d",&student[i].attendance);
        sum[i]+=student[i].attendance;
        printf("Enter finalExam Number\n");
        scanf("%d",&student[i].finalExam);
        sum[i]+=student[i].finalExam;
    }
    printf(">>>>>>>>>>>>Student Info<<<<<<<<<<<\n");
    for(int i=1;i<=n;++i){
        printf("For student number %d\n",i);
        printf("Name: %s\n",student[i].name);
        printf("ID: %d\n",student[i].id);
        printf("Mid: %d\n",student[i].mid);
        printf("Ct: %d\n",student[i].ct);
        printf("Attendance: %d\n",student[i].attendance);
        printf("Assignment: %d\n",student[i].assignment);
        printf("Final Exam: %d\n",student[i].finalExam);
        printf("Total Marks: %d\n",sum[i]);
    }

}
