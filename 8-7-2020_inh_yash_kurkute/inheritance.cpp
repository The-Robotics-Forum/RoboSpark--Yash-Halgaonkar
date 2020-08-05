#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Personal
{
    protected:
    string name, surname, address, dob;
    double mobile;

    protected:
    Personal()
    {
        name = "Default name";
        surname = "Default_surname";
        address = " Default_address";
        mobile = 1112223334;
        dob = "04-10-2001";
    }

    public:
    void personalDisplay()
    {
        cout << "\nPersonal details of candidate"<<endl;
        cout << "\nName : " << name;
        cout << "\nSurname : " << surname;
        cout << "\nDOB : " << dob;
        cout << "\nMobile : " << mobile;
        cout << "\nAddress : " << address;
    }

    public:
    void getPersonalData()
    {
        cout << "\nEnter personal details " << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Surname : ";
        cin >> surname;
        cout << "Address : ";
        cin >> address;
        cout << "Mobile : ";
        cin >> mobile;
        cout << "DOB : ";
        cin >> dob;   
    }
};

class Professional
{
    protected:
    string nameOfOrganization, jobProfile, project;
 
    protected:
    Professional()
    {
        nameOfOrganization = "Default nameOfOrganization";
        jobProfile = "Default_jobProfile";
        project = " Default_project";
    }

    public:
    void professionalDisplay()
    {
        cout << "\nProfessional details"<<endl;
        cout << "\nName of organization : " << nameOfOrganization;
        cout << "\nJob profile : " << jobProfile;
        cout << "\nProject : " << project;
    }

    public:
    void getProfessionalData()
    {
        cout << "\nEnter professional details" << endl;
        cout << "Name of organization: ";
        cin >> nameOfOrganization;
        cout << "Job profile : ";
        cin >> jobProfile;
        cout << "Project : ";
        cin >> project;
    }
};

class Academic
{
    protected:
    string yearOfPassing, collegeName, branch;
    double cgpa;

    protected:
    Academic()
    {
        yearOfPassing = "Default year";
        collegeName = "Default_college_name";
        branch = " Default_branch";
        cgpa = 0;
    }

    public:
    void academicDisplay()
    {
        cout << "\nEnter Academic details"<<endl;
        cout << "\nYear of passing : " << yearOfPassing;
        cout << "\nCollege name : " << collegeName;
        cout << "\nBranch : " << branch;
        cout << "\nCGPA : " << cgpa;
    }

    public:
    void getAcademicData()
    {
        cout << "\nEnter personal details" << endl;
        cout << "Year of passing : ";
        cin >> yearOfPassing;
        cout << "College name : ";
        cin >> collegeName;
        cout << "Branch : ";
        cin >> branch;
        cout << "CGPA : ";
        cin >> cgpa;  
    }
};


class BioData: public Personal, public Professional, public Academic
{
    public:
    /*void biodisplay() 
    { 
        int rollno; 
        cout << "\nEnter the student roll no : "; 
        cin >> rollno; 
    }*/
    void getdata()
    {
        getPersonalData();
        getProfessionalData();
        getAcademicData();
    }
    void displaydetails()
    {
        personalDisplay();
        academicDisplay();
        professionalDisplay();
    }
};

int main()
{
    BioData b1;
    b1.getdata();
    /*b1.biodisplay();
    b1.getPersonalData();
    b1.getProfessionalData();
    b1.getAcademicData();*/

     cout << "\n\nDETAILS OF THE CANDIDATE" << endl;
     b1.displaydetails();
    /*b1.personalDisplay();
    b1.academicDisplay();
    b1.professionalDisplay();*/

}