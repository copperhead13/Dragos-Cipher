#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int n,i,v[128]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,87,69,82,84,89,85,73,79,80,65,83,68,70,71,72,74,75,76,90,88,67,86,66,78,77,0,0,0,0,0,0,113,119,101,114,116,121,117,105,111,112,97,115,100,102,103,104,106,107,108,122,120,99,118,98,110,109,0,0,0,0,0};
    int d[128];
    char s[300000],r[300000]="",cod1,cod2;
    cout<<"1-Encode 2-Decode"<<'\n';
    do
    {
        cout<<"Pick option: ";
        cin>>n;

    }while(n<1 || n>2); //1=Criptare 2=Decriptare
    cout<<"Give Text:";
    cin>>s;
    if(n==1)
    {
        strcpy(r,s);
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]==' ' || s[i]==',')
                r[i]=s[i];
            else
            {
                cod1=char(v[int(s[i])]);
                r[i]=cod1;
            }
            cout<<cod1;

        }
        cout<<r[i];
    }
    if(n==2)
    {
         strcpy(r,s);
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]==' ' || s[i]==',')
                r[i]=s[i];
            else
            {
                cod2=char(d[int(s[i])]);
                r[i]=cod2;
            }
            cout<<cod2;
        }
        cout<<r[i];
    }

    return 0;
}
