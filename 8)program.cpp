#include<conio.h>
#include<iostream>

using namespace std;

class Matrix
{
private:
    int a[3][3];
public:
    void setData(int[][3]);
    void show();
    Matrix operator-();

};
void Matrix::setData(int b[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            a[i][j]=b[i][j];
    }
}
void Matrix::show()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
}
Matrix Matrix::operator-()
{
    Matrix m;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            m.a[i][j]=-a[i][j];
    }
    cout<<endl;
    return m;
}


int main()
{
    Matrix m1,m2;
    int s[3][3];
    cout<<"Enter the matrix data (3 X 3):"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>s[i][j];
    }
    cout<<endl;
    m1.setData(s);
    cout<<"Matrix is :"<<endl;
    m1.show();
    m2=-m1;
    cout<<"Matrix is :"<<endl;
    m2.show();
    getch();
    return 0;

}
