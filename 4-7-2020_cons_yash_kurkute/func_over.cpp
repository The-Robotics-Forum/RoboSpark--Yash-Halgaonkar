#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name = "Default_Name";
    int roll=00;
    int id=00;

void showRank(int r)
{
    cout<<"\nFunction 1 called only to display the rank\n";
    cout<< r << endl;
}
void showRank(Student s)
{
    cout<<"\nFunction 2 called to display only the student details\n";
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "GR.NO.: " << id << endl;
}
void showRank(Student s, int rank)
{
    cout<<"\nFunction 3 called to display both rank and details\n";
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "GR.NO.: " << id << endl;
    cout << "Rank: " << rank << endl;
}

void getInput()
{
        cout << "\nEnter student details\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll no : ";
        cin >> roll;
        cout << "GR.NO. : ";
        cin >> id;   
}

};

int main()
{
    int rank;
    Student s;

    s.getInput();
    cout << "Enter a rank : ";
    cin >> rank;

    s.showRank(rank);
    s.showRank(s, rank);
    s.showRank(s);
}