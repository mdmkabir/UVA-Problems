#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=1,j;
    char str[2000];
    while(scanf("%s",&str)==1)
    {
        if(strcmp(str,"#")==0){
            break;
        }
        else if(strcmp(str,"HELLO")==0){
            cout<<"Case "<<i<<": ENGLISH"<<endl;
        }
        else if(strcmp(str,"HOLA")==0){
            cout<<"Case "<<i<<": SPANISH"<<endl;
        }
        else if(strcmp(str,"HALLO")==0){
            cout<<"Case "<<i<<": GERMAN"<<endl;
        }
        else if(strcmp(str,"BONJOUR")==0){
            cout<<"case "<<i<<": FRENCH"<<endl;
        }
        else if(strcmp(str,"CIAO")==0){
            cout<<"Case "<<i<<": ITALIAN"<<endl;
        }
        else if(strcmp(str,"ZDRAVSTVUJTE")==0){
            cout<<"Case "<<i<<": RUSSIAN"<<endl;
        }
        else{
            cout<<"Case "<<i<<": UNKNOWN"<<endl;
        }
        i++;

    }
    return 0;
}
