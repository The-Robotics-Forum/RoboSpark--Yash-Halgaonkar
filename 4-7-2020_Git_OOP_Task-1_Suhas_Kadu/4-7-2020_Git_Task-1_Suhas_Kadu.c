
#include <iostream>
#include<string>
using namespace std;

class Student {
    private:
    string name;
    int roll;
    double *arr=new double[5];
    double cgpa;
    
   public:
    Student()
    {
        name="Mortal";
        roll=12;
        arr[0]=90;
        arr[1]=85;
        arr[2]=73;
        arr[3]=97;
        arr[4]=100;
        cgpa=8.95;
    }

       Student(string str,int rollno,int m1,int m2,int m3,int m4,int m5)
    {
        name = str;
        roll=rollno;
        arr[0]=m1;
        arr[1]=m2;
        arr[2]=m3;
        arr[3]=m4;
        arr[4]=m5;
        cgpa=8.8;
        
    }
 

    double totalmarks(int a)
    {
        double sum=0.0;
        for(int i=0;i<5;i++)
        {
            sum=sum+arr[i];
        }
        
       
        return sum;
        delete []arr; 
    }
    
    double calcgpa()
    {
        
        double i=totalmarks(5)/50;
        cgpa=i;
        return cgpa;
        
    }
    
    
    void getinfo()
    {
        cout<<endl<<endl<<"Enter the details of Student";
        cout<<endl<<"Enter the name: ";
        cin >> name;
        cout<<endl<<"Enter the Roll No.: ";
        cin >> roll;
        cout<<"Enter the marks of 5 subjects";
        for (int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
        
        
    }
    
    
    void showinfo()
    {
        cout<<"Details of Student are"<<endl;
        cout<<endl<<"Name :"<<name;
        cout<<endl<<"Roll No. : "<<roll;
        cout<<endl<<"Total Marks: "<<totalmarks(5);
        cout<<endl<<"C.G.P.A.: "<<calcgpa()<<endl;
        
    }
    
    
};

int main()
{
    
    Student s("Jack",13,60,93,82,79,91);
    s.showinfo();
    
    Student S;
    S.showinfo();
    
    Student s1;
    Student();
    s1.getinfo();
    s1.showinfo();
    
    Student s2;
    Student("John",54,56,89,81,79,99);
    s2.getinfo();
    s2.showinfo();

        
    return 0;
}


