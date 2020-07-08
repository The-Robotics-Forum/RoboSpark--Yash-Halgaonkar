#include <iostream>
#include<string>
using namespace std;

class RoboSoft
{
    public:
    RoboSoft()
    {
        cout<<"RoboSoft Constructor"<<endl;
    }
    void info();
};


class Android : public RoboSoft
{
    public :
    Android()
    {
       cout<<"Android Constructor"<<endl;
    }
    void info();
};


class ML :public RoboSoft
{
    public:
    ML()
    {
        cout<<"Machine Learning Constructor"<<endl;
    }
    void info();
};



class Web :public RoboSoft
{
    public:
    Web()
    {
        cout<<"Web Development Constructor"<<endl;
    }
    void info();
};



void RoboSoft::info()
{
    cout<<"\t\t\t\t\t\tWelcome to TRF RoboSoft!!!"<<endl;
    cout<<"\t\t____________________________________________________________________________________________"<<endl;
    cout<<"This the Head Branch of TRF"<<endl;
    cout<<"Our furthers Domains are:"<<endl;
    cout<<"Android Development"<<endl<<"Machine Learning"<<endl<<"Web Development"<<endl;
    
}

void Android::info()
{
    cout<<endl<<"\t\t\t\tWelcome this is the Android Development Domain of RoboSoft"<<endl;
    cout<<"\t\t____________________________________________________________________________________________"<<endl;
    cout<<"Here we have:"<<endl<<"Java"<<endl<<"App Development"<<endl;
}


void ML::info()
{
    
    cout<<endl<<"\t\t\t\tWelcome this is the Machine Learning Domain of RoboSoft"<<endl;
    cout<<"\t\t____________________________________________________________________________________________"<<endl;
    cout<<"Here we have:"<<endl<<"Data Science"<<endl<<"Image Processing"<<endl<<"Tensorflow,keras"<<endl;
}


void Web::info()
{
    
    cout<<endl<<"\t\t\t\tWelcome this is the Web Development Domain of RoboSoft"<<endl;
    cout<<"\t\t____________________________________________________________________________________________"<<endl;
    cout<<"Here we have:"<<endl<<"HTML/CSS"<<endl<<"Javascript"<<endl<<"Working with databases"<<endl;
}


int main()
{
    RoboSoft r;
    Android a;
    Web e;
    ML m;
    
    r.info();
    a.info();
    e.info();
    m.info();
    


    return 0;
}
