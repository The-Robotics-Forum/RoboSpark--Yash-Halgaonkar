
#include <iostream>
#include<string>
using namespace std;

class Personal
{
    protected:
    string name;
    string address;
    string mobile;
    string dob;
    
    public:
    Personal()
    {
        name="Naman";
        address="Mumbai";
        mobile="122334454";
        dob="8/7/2000";
    }
    
    void getinfo();
    void showinfo();
    
};

class Professional
{
    protected:
    string org;
    int experience;
    string project;
    
    public:
        Professional()
        {
            org="Soul";
            experience=3;
            project="PMIS";
        }
        
        void getinfo();
        void showinfo();
};

class Academic
{
    protected:
    int yop;
    double cgpa;
    string college;
    string branch;
    
    public:
    Academic()
    {
        yop=2018;
        cgpa=9.9;
        college="VIT";
        branch="Computer Science";
    }
    
    void getinfo();
    void showinfo();
};

class Biodata : public Personal, public Professional, public Academic
{
    public:
    Biodata()
    {}
    void getinfo();
    void showinfo();
};


void Personal::getinfo()
{
    cout<<"Enter your Personal Information"<<endl;
    cout<<"Name: ";
    cin>>name;
    cout<<"Address: ";
    cin>>address;
    cout<<"Mobile No.: ";
    cin>>mobile;
    cout<<"Date of Birth: ";
    cin>>dob;
    cout<<endl;
    
}


void Personal::showinfo()
{
    cout<<"Personal Information"<<endl;
    cout<<"Name: ";
    cout<<name<<endl;
    cout<<"Address: ";
    cout<<address<<endl;
    cout<<"Mobile No.: ";
    cout<<mobile<<endl;
    cout<<"Date of Birth: ";
    cout<<dob<<endl;
    cout<<endl;
    
}



void Professional::getinfo()
{
    cout<<"Enter your Professional Information"<<endl;
    cout<<"Name of Organization: ";
    cin>>org;
    cout<<"Experience: ";
    cin>>experience;
    cout<<"Project: ";
    cin>>project;
    cout<<endl;
    
}


void Professional::showinfo()
{
    cout<<"Professional Information"<<endl;
    cout<<"Name of Organization: ";
    cout<<org<<endl;
    cout<<"Experience: ";
    cout<<experience<<endl;
    cout<<"Project: ";
    cout<<project<<endl;
    cout<<endl;
    
}


void Academic::getinfo()
{
    cout<<"Enter your Academic Information"<<endl;
    cout<<"Year of passing: ";
    cin>>yop;
    cout<<"C.G.P.A.: ";
    cin>>cgpa;
    cout<<"College: ";
    cin>>college;
    cout<<"Branch: ";
    cin>>branch;
    cout<<endl;
    
}


void Academic::showinfo()
{
    cout<<"Enter your Academic Information"<<endl;
    cout<<"Year of passing: ";
    cout<<yop<<endl;
    cout<<"C.G.P.A.: ";
    cout<<cgpa<<endl;
    cout<<"College: ";
    cout<<college<<endl;
    cout<<"Branch: ";
    cout<<branch<<endl;
    cout<<endl;
    
}


void Biodata::getinfo()
{
    Personal::getinfo();
    Professional::getinfo();
    Academic::getinfo();
}

void Biodata::showinfo()
{
    Personal::showinfo();
    Professional::showinfo();
    Academic::showinfo();
}

int main()
{
    Biodata b;
    b.getinfo();
    b.showinfo();
    
    Biodata b2;
    b2.getinfo();
    b2.showinfo();
    
    return 0;
}
