#include<bits/stdc++.h>
using namespace std;

class String
{

public:
    char str[25];

    String(char s[])
        {
            strcpy(str, s);
        }
        void operator*(int t);
        void operator +(String &s);
        void operator== (String &s1);
        void operator= (String &s1);
         friend istream& operator >> (istream &cin, String &s);
        void display();
};
void String::operator== (String& s1)
{
   strcpy(s1.str,str);
   String temp1(s1);
   cout<<"\nCopied String is : "<<temp1.str<<endl;
}
istream& operator >> (istream &cin, String &s)
{
   cout << "\nEnter String: \n";
   cin>> s.str;

}
void String::operator= (String& s1)
{
   if(strcmp(str,s1.str)==0)
     cout << "\nThe Strings are equal"<<endl;  //strings are equal
   else
     cout << "\nThe Strings are not equal"<<endl; //strings are not equal
}
void String::operator*(int t)
        {
            cout<<"\nFinal String: ";
            for(int i=0;i<t;i++)
            {
                cout<<str;
            }
            cout<<endl;
        }
void String :: operator+(String& s1)
{
    strcat(str,s1.str);
    String temp(str);
    temp.display();
}
void String:: display()
{
    cout<<"\nConcatenated String: "<<str<<endl;
}

int main()
{
    String s1(""), s2(""), s3("");

    cout<< "For Concatenation";
    cin>> s1;
    cin>>s2;
    s1+s2;

    String s4(""),s5(""),s6(""),s7("");
    cout<<"\nCopy of strings";
    cin>>s4;
    cin>>s5;
    s4==s5;

    cout<<"\nEquality";
    cin>>s6;
    cin>>s7;
    s6=s7;

    cout<<"\nFor String Multiplication";
    cin>>s3;
    cout<<"\nEnter Number";
    int t;
    cin>>t;
    s3*t;
}