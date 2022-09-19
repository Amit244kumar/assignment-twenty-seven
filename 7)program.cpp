#include<conio.h>
#include<iostream>

using namespace std;

class fraction
{
   private:
     int numerator;
     int denominator;
   public:
        fraction()
        {
            numerator=denominator=0;
        }
        friend istream& operator>>(istream&,fraction&);
        friend ostream& operator<<(ostream&,fraction);
        fraction operator++(int useless)
        {
            fraction f;
            f.numerator=numerator++;
            f.denominator=denominator++;
            return f;
        }
        fraction operator++()
        {
            fraction f;
            f.numerator=++numerator;
            f.denominator=++denominator;
            return f;
        }
};

ostream& operator<<(ostream &os,fraction f)
{
    os<<f.numerator<<"/"<<f.denominator<<endl;
}

istream& operator>>(istream &in,fraction &f)
{
    cout<<"numerator  : ";
    in>>f.numerator;
    cout<<"denominator   : ";
    in>>f.denominator;
    return in;
}

int main()
{
    fraction f1,f2;
    cout<<"Enter 1st fraction value"<<endl;
    cin>>f1;
    f1++;
    cout<<"f1++  : "<<f1;
    cout<<"++f1   : "<<++f1;
    f2=++f1;
    cout<<"f2=++f1"<<endl;
    cout<<"f1   : "<<f1;
    cout<<"f2   : "<<f2;

    f2=f1++;
    cout<<"f2=f1++"<<endl;
    cout<<"f1   : "<<f1;
    cout<<"f2   : "<<f2;

    getch();
    return 0;
}
