#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto n = Random::integer(1,1000);
    cout<<n<<endl;
    while(n)
    {
        for(auto i = 0; i<3 ;++i){
            auto c = Random::integer(3,2000);
            auto b = Random::integer(2,c);
            auto s = Random::integer(2,c);
            cout<<b<<endl;
            cout<<s<<endl;
            cout<<c<<endl;
        }
        --n;
    }
}