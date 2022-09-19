#include<conio.h>
#include<iostream>
using namespace std;

class Complex
{
    private:
       int real,img;
    public:
        void setData(int r,int i)
        {
            real=r;
            img=i;
        }

        void showData()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }
        Complex operator-(Complex c)
        {
            Complex temp;
            temp.real=real-c.real;
            temp.img=img-c.img;
            return temp;
        }
        Complex operator*(Complex c)
        {
            Complex temp;
            temp.real=real*c.real;
            temp.img=img*c.img;
            return temp;
        }
        int operator==(Complex c)
        {
            if(real==c.real&&img==c.img)
                 return 1;
            else
                return 0;
        }
};

int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(3,4);
    c2.setData(3,4);
    c1.showData();
    c2.showData();
    c3=c1+c2;
    c3.showData();
    c4=c1-c2;
    c4.showData();
    c5=c1*c2;
    c5.showData();
    if(c1==c2)
    {
        cout<<"equal";
    }
    else
    {
        cout<<"Not equal";
    }
    getch();
    return 0;
}
