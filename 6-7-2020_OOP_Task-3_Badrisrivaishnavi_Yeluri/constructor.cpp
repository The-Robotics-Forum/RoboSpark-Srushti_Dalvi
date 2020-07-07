#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    double* sub = new double[5];
    Student()
    {
        name="Default";
        roll=0;
    }

    Student getInput()
    {
        Student S;
        cout << "Give the input\n";
        cout << "Name: ";
        cin >> S.name;
        cout << "Roll No: ";
        cin >>S.roll;
        for(int i=0;i<5;i++)
        {
            cout << "Enter marks for subject" << i+1<<":\n";
            cin >> S.sub[i];
           
        }
        return(S);
      
    }
    
     double Total(double* sub)
    {
        double total=0;
        for(int i=0;i<5;i++)
        {
            total = total + sub[i];
        }
        return total;
    }
    
    double Cgpa(double total)
    {
        double cgpa=0;
        cgpa = total/5;
        return cgpa;
    }

    void showDetails(Student S)
    {
        
        cout << "Name: " << S.name<<endl;
        cout << "Roll No:" <<S.roll<<endl;
        cout << "Total Marks: " << Total(S.sub)<< endl;
        cout << "CGPA: " << Cgpa(Total(S.sub)) << endl;
        
    }
    
};

int main()
{
    Student S;
    S=S.getInput();
    S.showDetails(S);
    delete [] S.sub;
   
}

