#include<conio.h>
#include<iostream>
using namespace std;

class Time
{
    private:
       int hr;
       int min;
       int sec;
    public:
        friend istream& operator>>(istream &in,Time &t);
        friend ostream& operator<<(ostream &os,Time t);
        bool operator==(Time t)
        {
            if(hr==t.hr && min==t.min && sec==t.sec){
                 return 1;
            }
            else{
                return 0;
            }
        }
};

istream& operator>>(istream &in,Time &t)
{
    int h,m,s;
    cout<<"Enter hours :  "<<endl;
    in>>t.hr;
    cout<<"Enter minutes : "<<endl;
    in>>t.min;
    cout<<"Enter seconds : "<<endl;
    in>>t.sec;
    return in;
}
ostream& operator<<(ostream &os,Time t)
{
    os<<"Hours   :"<<t.hr<<endl;
    os<<"Minutes   :"<<t.min<<endl;
    os<<"Seconds   :"<<t.sec<<endl;
    return os;
}

int main()
{
    Time t1,t2;
    cout<<"Enter first time"<<endl;
    cout<<"-----------------"<<endl;
    cin>>t1;
    cout<<"First time"<<endl;
    cout<<t1;
    cout<<"Enter second time"<<endl;
    cout<<"-----------------"<<endl;
    cin>>t2;
    cout<<t2;
    if(t1==t2)
    {
        cout<<"Time is equal";
    }
    else
        cout<<"Time is not equal";
    getch();
    return 0;
}
