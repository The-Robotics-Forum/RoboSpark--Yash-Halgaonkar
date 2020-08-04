#include<bits/stdc++.h>
using namespace std;

class Student {
public :

    string name ;
    

    Student(string n)
    {
        name = n;
        
    }
    void showRank(int r)
    {
        cout << "Rank is : " << r << endl;
        
    }
    void showRank(Student &n,int r)
    {
        cout << "Name :" << n.name << endl ;
        cout << "Rank :" << r << endl;
    }
    void showRank(Student &n)
    {
        cout  << "name : " << n.name << endl;
        cout << "No Rank "<< endl;
    }




};

int main ()
{
    int a = 5;
    Student s("Kailash");
    s.showRank(a);
    s.showRank(s,a);
    s.showRank(s);

    





}