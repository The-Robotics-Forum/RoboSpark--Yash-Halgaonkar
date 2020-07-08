#include<bits/stdc++.h>
using namespace std;

class String
{
    public:
        char *arr;
        int size;

        String (int size)
            {
                int i=0;
                arr = new char[size];
                for (i=0;i<5;i++)
                {
                    arr[i]='a';
                }
                arr[i]='\0';
            
            }
            
        void getinfo();
        void display();
        void operator+(string s);
        void operator*(int n);
        friend istream& operator >> (istream&cin ,String &s);
        friend ostream& operator >> (ostream&cout ,String &s);
       
    
};

void String::getinfo()
{
    int i=0;
    cout<<"Enter the String: ";
    for(i=0;arr[i]!=0;i++)
    {
        cin>>arr[i];
    }
    arr[i]='\0';
}


void String::display()
{
    int i=0;
    for (i=0;arr[i]!='\0';i++)
        cout<<arr[i];
    cout<<endl;
}

void String::operator+(string s)
{
    String retval=*this;
    int i=0;
    int j=0;
    
    while(retval.arr[i]!='\0')
    {
        i++;
    }
    
    for(j=0;s[j]!='\0';j++,i++)
    {
        retval.arr[i]=s[j];
    }
    
}


void String::operator*(int n)
{
    
    String retval=*this;
    int i=0;
    int j=0;
    for(int k=1;k<2;k++){
    int len=0;
    
    string s;
    
    for(i=0;retval.arr[i]!='\0';i++)
    {
        s[i]=retval.arr[i];
    }
    s[i]='\0';
    
    while(retval.arr[len]!='\0')
    {
        len++;
    }
    
    for(j=0;s[j]!='\0';j++,len++)
    {
        retval.arr[len]=s[j];
    }
    retval.arr[j]='\0';
    }
}


istream& operator>>(istream &cin, String &s)
{
    int i=0;
    cout<<"Enter the String";
    for(i=0;s.arr[i]!='\0';i++)
    cin>>s.arr;
    s.arr[i]='\0';
    
    return cin;
}


ostream& operator<<(ostream &cout, String &s)
{
    int i=0;
    cout<<"String";
    for(i=0;s.arr[i]!='\0';i++)
    cout<<s.arr<<endl;
    
    return cout;
}



int main()
{
    String s1(20);
    String c(20);
    
     //Concatenating Strings
    cout<<endl<<"Before: ";
    s1.display();
    cout<<"After Adding: ";
    s1+"MORTAL";
    s1.display();
   
    
    //Multiplying String
    cout<<endl<<"Before: ";
    c.display();
    cout<<endl<<"After Multiplying:";
    c*2;
    c.display();
   
  
    cout<<endl;
    cin>>s1;
    s1*2;  //overloading
    cout<<s1;
    
    return 0;
}
