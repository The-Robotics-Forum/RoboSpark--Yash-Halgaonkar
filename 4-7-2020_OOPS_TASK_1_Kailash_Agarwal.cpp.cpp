#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int year;
    int roll;
    float cgpa;
    int sum;
    float y;
    int *arr = new int[5];

    Student()
    {
        cout <<"Default Constructor\n";
        cgpa = 00;
    }

    void getinput()
        {
            cout << "\nplz enter the following details";
            cout << "\nName : ";
            cin >> name ;
            cout << "\nroll no : ";
            cin >> roll;
            cout << "\nyear : " ;
            cin >> year;

        }
    int getTotal()
    {
        cout<<"\nenter the marks out of 100 :";
        

        for (int i =0;i<5;i++)
        {
            cin >> arr[i];
           sum = sum + arr[i];
           
        }
        return sum ;

    }
    int getcgpa(int *marks)
    {
        int s = 0;
        for (int i =0;i<5;i++)
        {
           s= s + arr[i];
           
        }

        y = (s/5)/9.5;
        return y;

    }
    void showdetails()
    {
        getcgpa(arr);
        cout<< "Name :" << name << endl;
        cout<< "Roll no :" << roll << endl;
        cout<< "Year : " << year << endl;
        cout<< "CGPA : " << y << endl;
    }

    








};
int main ()
{
    Student s;
    s.getinput();
    s.getTotal();
    s.showdetails();
}
