#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, year;
    double sum=0, cgpa;

    Student()
    {
        name = "default name";
        roll = 0;
        cgpa = 0;
        year = 0;
    }
    Student(string n, int r, int y)
    {
        name = n;
        roll = r;
        cgpa = 0;
        year = y;
    }

    void input()
    {
        cout << "Enter the details"<<endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;
        cout << "Year: ";
        cin >> year;

        Student s(name,roll,year);
    }

    int total_marks(double *arr)
    {
        for(int i=0; i<5 ;i++)
        {
            cout<<"Enter Marks of subject "<<i+1<<endl;
            cin >>arr[i] ;
            sum=sum+arr[i];
        }
        return sum;
    }

    double stud_cgpa(double total)
    {
        double per = total/5;
        cgpa = per/9.5;
    }

    void display()
    {
        cout << "\nName: "<< name <<endl;
        cout << "Roll No.: "<< roll <<endl;
        cout << "Year: "<< year <<endl;
        cout<<"Toal Marks Obtained:"<<sum<<endl;
        cout << "CGPA: "<< cgpa <<endl;
    }

};

int main()
{
     Student stud;

     stud.input();

     double *std = new double[5];
     double sum1=stud.total_marks(std);
     delete std;

     stud.stud_cgpa(sum1);
     stud.display();
}