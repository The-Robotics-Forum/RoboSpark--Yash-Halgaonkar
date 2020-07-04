
#include <iostream>
#include<string>
using namespace std;

class Student {
    private:
    string name;
    int roll;
    int year;
    
   public:
    Student()
    {
        name="Mortal";
        roll=12;
        year=2;
    }

    Student(string str,int rollno,int y)
    {
        name = str;
        roll=rollno;
        year=y;
    }
 
    
    
    void showinfo()
    {
        cout<<endl<<"Details of Student are"<<endl;
        cout<<endl<<"Name :"<<name;
        cout<<endl<<"Roll No.: "<<roll;
        cout<<endl<<"Year: "<<year<<endl<<endl;
    }
    
    
    void showRank(int n)
    {
        //Shows only rank
        cout<<"Rank: "<<n<<endl;
    }
    
    void showRank(Student s)
    {   
        //shows only Details
        s.showinfo();
    }
    
    void showRank(Student s,int n)
    {
        //shows Rank and Details
        s.showinfo();
        cout<<endl<<endl<<"Rank: "<<n;
    }
};

int main()
{
    
    Student s1("John",50,1);
    s1.showRank(1);
    
    Student s("John",50,1);
    s.showRank(s);       
   
    Student S;
    S.showRank(S);      
    
    
    
    return 0;
}


