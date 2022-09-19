#include<conio.h>
#include<iostream>
using namespace std;

class Complex
{
  private:

         int real,img;
  public:
        friend Complex operator+(Complex,Complex);
        Complex(){ }
        Complex(int x,int y)
        {
            real=x;
            img=y;
        }
        void showData()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};

Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

int main()
{
    Complex c1(2,4),c2(6,4),c3;
    c1.showData();
    c2.showData();
    c3=c1+c2;
    c3.showData();
    getch();
    return 0;
}
