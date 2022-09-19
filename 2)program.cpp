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
        void operator++()
        {
            real++;
            img++;
        }
        void operator--()
        {
            real--;
            img--;
        }
};

int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,1);
    c1.showData();
    c2.showData();
    ++c1;
    ++c2;
    c1.showData();
    c2.showData();
    --c1;
    --c2;
    c1.showData();
    c2.showData();
    getch();
    return 0;
}
