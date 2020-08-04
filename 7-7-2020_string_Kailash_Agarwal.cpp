#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    int size;
    char *arr;

public:
    String()
    {
        size = 15;
        arr = new char[15];
    }

    String(int size)
    {
        this->size = size;
        arr = new char[size];
    }
    String(char *s)
    {
        size = strlen(s);
        arr = new char[size];

        for (int i = 0; i < size; i++)
            arr[i] = s[i];
    }

    void operator=(char *s);
    void display();


    String operator+(String s);
    String operator*(int n);
    int length();
    String append(String s);
};

int String::length()
{
    return size;
}

void String::display()
{
    cout << "String : " << arr << endl;
}

void String::operator=(char *s)
{
    size = strlen(s);
    arr = new char[size];

    for (int i = 0; i < size; i++)
        arr[i] = s[i];
}

String String::operator+(String s)
{
    String t(size + s.size);
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        t.arr[k++] = arr[i];
    }

    for (int i = 0; i < s.size; i++)
    {
        t.arr[k++] = s.arr[i];
    }

    return t;
}

String String::operator*(int n)
{
    String t(size*n);
    int k = 0;
    while(n--)
    {
        for(int i = 0; i < size; i++)
        {
            t.arr[k++] = arr[i];
        }   
    }
    return t;

}

String String::append(String s)
{
    String t(size + s.size);

    int k = 0;
    for (int i = 0; i < size; i++)
    {
        t.arr[k++] = arr[i];
    }

    for (int i = 0; i < s.size; i++)
    {
        t.arr[k++] = s.arr[i];
    }

    return t;
}

int main()
{
    String kailash = "kailash";

    String agarwal = "agarwal";

    (kailash+agarwal).display();



}