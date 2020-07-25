#include<bits/stdc++.h>
using namespace std;

struct info{
    string name;
    string id;
    string grade;
    double midterm=0;
    double final=0;
    double assignment=0;
    double ct=0;
    double attendance=0;
    double total=0;
};
int main(){
    int n;
    cout<<"Enter the student number: ";
    cin>>n;
    struct info student[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the name of student: ";
        cin>>student[i].name;
        cout<<"Enter the id number: ";
        cin>>student[i].id;
        cout<<"Enter the midterm exam number: ";
        cin>>student[i].midterm;
        if(student[i].midterm>30){
            while(true){
                cout<<"The midterm number not valid, enter again."<<endl;
                cout<<"Enter midterm number: ";
                cin>>student[i].midterm;
                if(student[i].midterm<=30){
                    break;
                }
            }
        }
        student[i].total+=student[i].midterm;
        cout<<"Enter the final exam number: ";
        cin>>student[i].final;
        if(student[i].final>40){
        while(true){
            cout<<"The number is not valid, enter again"<<endl;
            cout<<"Enter the final exam number: ";
            cin>>student[i].final;
                if(student[i].final<=40){
                    break;
                }
            }
        }
        student[i].total+=student[i].final;
        double assignment=0;
        cout<<"Enter the assignment01 number: ";
        cin>>student[i].assignment;
        if(student[i].assignment>10){
        while(true){
            cout<<"The number is not valid, enter again"<<endl;
            cout<<"Enter the assignment01 number: ";
            cin>>student[i].assignment;
                if(student[i].assignment<=10){
                    break;
                }
            }
        }
        assignment+=student[i].assignment;
        cout<<"Enter the assignment02 number: ";
        cin>>student[i].assignment;
        if(student[i].assignment>10){
        while(true){
            cout<<"The number is not valid, enter again"<<endl;
            cout<<"Enter the assignment02 number: ";
            cin>>student[i].assignment;
                if(student[i].assignment<=10){
                    break;
                }
            }
        }
        assignment+=student[i].assignment;
        student[i].total+=(assignment/2);
        student[i].assignment=(assignment/2);
        double ct=0,ct1,ct2,ct3,smallest=100;
        cout<<"Enter the ct01 number: ";
        cin>>student[i].ct;
        if(student[i].ct>10){
        while(true){
            cout<<"The number is not valid, enter again"<<endl;
            cout<<"Enter the ct01 number: ";
            cin>>student[i].ct;
                if(student[i].ct<=10){
                    break;
                }
            }
        }
        ct1=student[i].ct;
        cout<<"Enter the ct02 number: ";
        cin>>student[i].ct;
        if(student[i].ct>10){
        while(true){
            cout<<"The number is not valid, enter again"<<endl;
            cout<<"Enter the ct02 number: ";
            cin>>student[i].ct;
                if(student[i].ct<=10){
                    break;
                }
            }
        }
        ct2=student[i].ct;
        cout<<"Enter the ct03 number: ";
        cin>>student[i].ct;
        if(student[i].ct>10){
        while(true){
            cout<<"The number is not valid, enter again"<<endl;
            cout<<"Enter the ct03 number: ";
            cin>>student[i].ct;
                if(student[i].ct<=10){
                    break;
                }
            }
        }
        ct3=student[i].ct;
        ct=ct1+ct2+ct3;
        if(ct1<smallest){
            smallest=ct1;
        }
        if(ct2<smallest){
            smallest=ct2;
        }
        if(ct3<smallest){
            smallest=ct3;
        }
        ct=(ct-smallest)/2;
        student[i].total+=ct;
        cout<<"Enter the attendance number: ";
        cin>>student[i].attendance;
        if(student[i].attendance>10){
        while(true){
            cout<<"The number is not valid, enter again"<<endl;
            cout<<"Enter the attendance number: ";
            cin>>student[i].attendance;
                if(student[i].attendance<=10){
                    break;
                }
            }
        }
        student[i].total+=student[i].attendance;
        double total=round(student[i].total);

        student[i].total=total;

        if(total>=80){
            student[i].grade="A+";
        }
        else if(total>=75){
            student[i].grade="A";
        }
        else if(total>=70){
            student[i].grade="A-";
        }
        else if(total>=65){
            student[i].grade="B+";
        }
        else if(total>=60){
            student[i].grade="B";
        }
        else if(total>=55){
            student[i].grade="B-";
        }
        else if(total>=50){
            student[i].grade="C";
        }
        else if(total>=40){
            student[i].grade="D";
        }
        else{
            student[i].grade="F";
        }
    }
    cout<<"Calculation done!"<<endl;

    while(true){
                int count=0;
                cout<<"Enter search id: (press 'E' for exit)";
                string id;
                cin>>id;
                if(id=="E"){
                    break;
                }
                for(int i=0;i<n;++i){
                    if(student[i].id==id){
                        count++;
                        cout<<".....student info......"<<endl;
                        cout<<"Name : "<<student[i].name<<endl;
                        cout<<"ID : "<<student[i].id<<endl;
                        cout<<"Mid : "<<student[i].midterm<<endl;
                        cout<<"Final : "<<student[i].final<<endl;
                        cout<<"Assignment : "<<student[i].assignment<<endl;
                        cout<<"Class test : "<<student[i].ct<<endl;
                        cout<<"Attendance : "<<student[i].attendance<<endl;
                        cout<<"Total : "<<student[i].total<<endl;
                        cout<<"Grade : "<<student[i].grade<<endl;

                    }
                    if(count==0)
                        {
                            cout<<"invalid id try again!"<<endl;
                        }
                }
            }



return 0;
}

