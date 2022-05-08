//Program to check a string is valid only when it contains gfg in it in sequence 
#include <iostream>
using namespace std;
int main()
{
    int i,c=0,d=0;
    string str;
    cin>>str;
    int len;
    len=str.size();
    for(i=0;i<len;i++)
    {
        if(str[i]=='g')
        {
            if(str[i+1]!='f')
            c++;
            if(str[i+2]!='g')
            d++;
            i=i+3;
        }
    }
    if(c==0)
    cout<<"Valid String";
    else
    cout<<"Not a valid string and it takes "<<c+d<<" operation to convert into valid";
}