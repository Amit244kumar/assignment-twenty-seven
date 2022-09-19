#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

class mystring
{
private:
    char str[100];
public:
     void setString(char s[])
     {
         strcpy(str,s);
     }
     void showString()
     {
         cout<<str;
     }

     mystring operator!()
     {
         mystring s;
         strcpy(s.str,str);
         int n=strlen(s.str),t;
         for(int i=0;i<n/2;i++)
         {
             t=s.str[i];
             s.str[i]=s.str[n-i-1];
             s.str[n-i-1]=t;
         }
         return s;
     }
};

int main()
{
    mystring s1,s2;
    char s[40];
    cin>>s
    s1.setString("Amit Kumar singh");
    s2=!s1;
    s2.showString();
    getch();
    return 0;

}
