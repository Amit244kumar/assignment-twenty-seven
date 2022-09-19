#include<conio.h>
#include<iostream>

using namespace std;

class matrix
{
  private:
    int a[3][3];
  public:
    void setM(int[][3]);
    void show();
    matrix operator+(matrix);
};

void matrix::show()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void matrix::setM(int t[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            a[i][j]=t[i][j];
    }
}

matrix matrix::operator+(matrix t)
{
    matrix m;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            m.a[i][j]=a[i][j]+t.a[i][j];
    }
    return m;
}


int main()
{
    matrix m1,m2,m3;
    int f1[3][3],f2[3][3];
    cout<<"Enter first matrix element :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>f1[i][j];
    }
    cout<<"Enter second matrix element :"<<endl;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>f2[i][j];
    }
    m1.setM(f1);
    m2.setM(f1);
    cout<<"first matrix"<<endl;
    m1.show();
    cout<<"second matrix"<<endl;
    m2.show();
    m3=m1+m2;
    cout<<"Addition of matrix"<<endl;
    m3.show();
    getch();
    return 0;

}
