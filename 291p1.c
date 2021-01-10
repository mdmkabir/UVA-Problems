#include<bits/stdc++.h>
using namespace std;

int main()
{
    double w0,w1,w2,w3,w4,size,floor,br,M=0;
    cin>>w0>>w1>>w2>>w3>>size>>floor>>br;
    M = w0+w1*size+w2*floor+w3*br;
    cout<<M;
    return 0;
}
