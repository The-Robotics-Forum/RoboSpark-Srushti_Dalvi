#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    double cgpa;
    Student()
    {
        
    }
    Student getInput()
    {
        Student S;
        cout << "Give the input\n";
        cout << "Name: ";
        cin >> S.name;
        cout << "Roll No: ";
        cin >>S.roll;
        cout << "Cgpa: ";
        cin >> S.cgpa;
        return(S);
    }
    void showRank(Student S)
    {
        cout<<"Student Info\n";
        cout<<"Name: "<<S.name<<endl;
        cout <<"Roll: "<< S.roll<<endl;
        cout <<"Cgpa: "<<S.cgpa<<endl;
        cout <<"No rank\n"<<endl;
    }
    void showRank(Student S, int rank)
    {
        cout<<"Student Info\n";
        cout<<"Name: "<<S.name<<endl;
        cout<<"Roll No: "<<S.roll<<endl;
        cout<<"CGPA: "<<S.cgpa<<endl;
        cout<<"Rank:"<< rank <<endl<<"\n";
    }
    void showRank(int rank)
    {
        cout<<"Rank:"<<rank;
    }
};
int main()
{
    Student S;
    int rank =0;
    S=S.getInput();
    S.showRank(S);
    cout<<"Enter rank:";
    cin>>rank;
    cout<<"\n";
    S.showRank(S,rank);
    S.showRank(rank);
}