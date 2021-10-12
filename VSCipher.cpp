#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int x,n,i,v[128]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,87,69,82,84,89,85,73,79,80,65,83,68,70,71,72,74,75,76,90,88,67,86,66,78,77,0,0,0,0,0,0,113,119,101,114,116,121,117,105,111,112,97,115,100,102,103,104,106,107,108,122,120,99,118,98,110,109,0,0,0,0,0};
int d[128]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,88,86,77,67,78,79,80,72,81,82,83,90,89,73,74,65,68,76,69,71,87,66,85,70,84,0,0,0,0,0,0,107,120,118,109,99,110,111,112,104,113,114,115,122,121,105,106,97,100,108,101,103,119,98,117,102,116,0,0,0,0,0};
char cod1,cod2;
void encode(char s[300000], char r[300000])
{
    int i;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]==' ' || s[i]==',' || s[i]=='.')
            continue;
        else
        {
            cod1=char(v[int(s[i])]);
            r[i]=cod1;
        }
    }

}
void decode(char s[300000], char r[300000])
{
    int i;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]==' ' || s[i]==',')
            continue;
        else
        {
            cod2=char(d[int(s[i])]);
            r[i]=cod2;
        }
    }

}
int main()
{
    char s[300000],r[300000]="",cod1,cod2;
    cout<<"1-Encode 2-Decode 3-Loop Encoding 4-Loop Decoding"<<'\n';
    do
    {
        cout<<"Pick option: ";
        cin>>n;

    }
    while(n<1 || n>4);
    cout<<"Give Text: ";
    cin.get();
    cin.getline(s,300000);
    if(n==1)
    {
        cout<<"Encoded Text: ";
        encode(s,r);
        cout<<r;
    }
    if(n==2)
    {
        cout<<"Decoded Text: ";
        decode(s,r);
        cout<<r;
    }
    if(n==3)
    {
        cout<<"Number of encodings: ";
        cin>>x;
        cout<<"Encoded text: ";
        while(x!=0)
        {
            encode(s,s);
            x--;
        }
        cout<<s;
    }
    if(n==4)
    {
        cout<<"Number of decodings: ";
        cin>>x;
        cout<<"Decoded text: ";
        while(x!=0)
        {
            decode(s,s);
            x--;
        }
        cout<<s;
    }

    return 0 ;
}
