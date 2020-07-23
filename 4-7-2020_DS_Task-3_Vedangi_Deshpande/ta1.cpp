#include<iostream>
#include<cstring>
using namespace std;

class Student{
    public:

    string name;
    int roll;

    Student(){
        name="";
        roll=0;
    }
    int* arr= new int[5];
    int total(int* arr){
        float  sum=0;
        for (int i =0; i<5; i++){
            sum=sum+arr[i];
        }
        return(sum);
    }

    float cgpa(int sum){
        float per;
        float cgpa=0;
        per=sum/5;
        cgpa=per/9.5;
        return cgpa;
        }

    Student input(){
        Student S;
        cout<<"Fill student details\n";
        cout<<"Enter the name and roll number\n";
        cin>>S.name;
        cin>>S.roll;
        cout<<"Enter the marks (out of 100) of 5 subjects \n";
        cin>>S.arr[0]>>S.arr[1]>>S.arr[2]>>S.arr[3]>>S.arr[4];
        return(S);
    }
    void display(Student S)
    {
        cout<<"\nStudent name: "<<S.name;
        cout<<"\nRoll number: "<<S.roll;
        cout<<"\nThe total score is: "<<total(S.arr);
        cout<<"\nCGPA: "<<cout<<"\nCGPA: "<<cgpa(total(S.arr));

    }


};



int main(){
    Student S;
    S=S.input();
    S.display(S);

}

