#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[500],rev[500];
    int i,l;
    cout<<"ENTER A STRING : ";
    gets(str);
    l = strlen(str);
    for(i=0; str[i]!='\0'; i++)
    {
        rev[l-1] = str [i];
        l--;
    }
    cout<<"\n REVERSED STRING IS :  "<<rev;
    return 0;
}
