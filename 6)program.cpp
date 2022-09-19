#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class CString
{
private:
    char str[50];
public:
    CString(){}
    CString(char s[])
    {
        strcpy(str,s);
    }

    CString operator+(CString);
    bool operator==(CString);
    void show()
    {
        cout<<str<<endl;
    }
};

CString CString::operator+(CString s)
{
    int l,f=0;
    CString temp;
    strcpy(temp.str,str);
    l=strlen(str);
    for(int i=l;i<s.str[f];i++)
    {
        temp.str[i]=s.str[f];
        f++;
    }
    return temp;
}

bool CString::operator==(CString s)
{
    for(int i=0;str[i]||s.str[i];i++)
    {
        if(str[i]!=s.str[i])
                return 0;
    }
    return 1;
}

int main()
{
    CString s1("amit"),s2("amit"),s3;
    s1.show();
    s2.show();
    s3=s1+s2;
    s3.show();
    if(s1==s2)
        cout<<"both string equal";
    else
        cout<<"both string not equal";
    getch();
    return 0;
}
