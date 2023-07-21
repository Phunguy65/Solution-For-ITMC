#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    const char p = ':';
    for(auto i  = 1 ; i<=2 ;++i){
        auto hh = Random::integer(0,24);
        auto mm = Random::integer(0,59);
        cout<<hh<<p<<mm<<endl;
    }
}