#include<bits/stdc++.h>
using namespace std;

int main()
{
char ch;
int k=0;
while(scanf("%c",&ch)==1)
{
    if(ch=='"')
    {
        k++;
        if(k%2==1)
        printf("``");
        else if(k%2==0)
        printf("''");
    }
    else printf("%c",ch);
}
}
