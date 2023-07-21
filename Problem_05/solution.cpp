#include<bits/stdc++.h>
using namespace std;
long solve(long &b, long&s , long &c){
    return b+s-c;
}
int main()
{
    long b,s,c,T;
    cin>>T;
    while(T){
        cin>>b>>s>>c;
        cout<<solve(b,s,c)<<endl;
        --T;
    }
}