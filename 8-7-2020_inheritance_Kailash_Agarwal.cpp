#include <bits/stdc++.h>
using namespace std;

class Pers
{ 
protected:
string name;
string Surname;
string add;
int mob;
string dob;
public:
void get_input(int,string,string,string,string);
//void get_input_str(string,string);

};

class pro
{
protected:
string noo;
string job;
string proj;
public :
void get_input_pro(string,string,string);



};
class aca
{
protected:
int year;
float cgpa;
string clg;
string branch;
public :
void get_input_aca(int,float,string,string);

};

class bio : public Pers,public pro,public aca
{
    public:
    void display();
    void display_pro();
    void display_aca();

};

void Pers:: get_input(int a,string b,string c,string d,string e)
{
    mob = a;
    name =b;
    Surname=c;
    add = d;
    dob = e;

}
void pro :: get_input_pro(string b,string c,string d)
{
    proj = d;
    job = c;
    noo = b;


}
void aca :: get_input_aca(int a,float b,string c,string d)
{
    year = a;
    cgpa = b;
    clg =c;
    branch =d;
}
void bio::display()
{
    cout << "mobile no is : " << mob << endl ;
    cout << "name is : " << name << endl;
    cout << "surname is : " << Surname<< endl;
    cout << "Address is : " << add << endl;
    cout << "date is : " << dob << endl;

}
void bio :: display_pro()
{
    cout << " Name of org : " << noo <<  endl;
    cout << "Project name : " << proj << endl;
    cout << "Job profile : " << job << endl;

}

void bio :: display_aca()
{
    cout<<"Year :"<< year<< endl;
    cout<<"CGPA : "<< cgpa<< endl;
    cout<<"clg name :"<<clg << endl;
    cout<<"Branch : "<< branch << endl;
}

int main()
{
    bio a1;
    int x = 123456789;
    string y = "Kailash";
    string z = "Agarwal";
    string p = "mahavir soc, sahakarnagar -1";
    string q = "27th jan 2001";
    string a = "google";
    string b = "manager";
    string c = "software";
    int d = 2023;
    float e = 8.9;
    string f = "VIT";
    string g ="instru" ;

    a1.get_input(x,y,z,p,q);
    a1.get_input_pro(a,b,c);
    a1.get_input_aca(d,e,f,g);
    a1.display();
    a1.display_pro();
    a1.display_aca();

}