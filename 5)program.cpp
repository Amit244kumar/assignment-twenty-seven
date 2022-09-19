#include<conio.h>
#include<iostream>
using namespace std;

class Numbers
{
   private:
       int y,x,z;
   public:
    void setNo(int a,int b,int c)
    {
        y=a;
        x=b;
        z=c;
    }

    Numbers operator-()
    {
        Numbers n;
        n.y=-y;
        n.x=-x;
        n.z=-z;
        return n;
    }
    void showData()
    {
        cout<<y<<" "<<x<<" "<<z;
    }
};

int main()
{
    Numbers n1,n2;
    n1.setNo(4,3,6);
    n2=-n1;
    n2.showData();
    getch();
    return 0;
}
