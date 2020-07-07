#include<bits/stdc++.h>
using namespace std;

class String
{
    private:
        string arr;

    public:
        String ()
            {
                arr = "default";
            }
        String(string str)
            {
                arr = str;
            }
    
        void display();
        String operator+(string s);
        String operator*(int n);
    
};

void String::display()
{
    cout<<arr<<endl;
}

String String::operator+(string s)
{
    String retval2=*this;
    retval2.arr = retval2.arr+s;
    return retval2;
}

String String::operator*(int n)
{
    String retval=*this;
    string s = retval.arr;
    for (int i=1;i<n;i++) 
    {
    retval.arr =retval.arr+s; 
    }
    return retval;
}


int main()
{
    String s1("SOUL");
    String c("Chow");
    
    //Multiplying String
    cout<<endl<<"Before: ";
    c.display();
    cout<<endl<<"After Multiplying:";
    c=c*3;
    c.display();
    
    //Concatenating Strings
    cout<<endl<<"Before: ";
    s1.display();
    cout<<"After Adding: ";
    s1=s1+"MORTAL";
    s1.display();
   
    return 0;
}
