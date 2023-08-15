#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto T = Random::integer(1,10000);
    cout<<T<<endl;
    while (T)
    {
        /* code */
        auto n = Random::integer(2,1000000);
        auto str = Random::String(Random::integer(2,100),"kobsamxpv");
        cout<<n<<" "<<str<<endl;
        --T;
    }
}