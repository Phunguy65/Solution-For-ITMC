#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto a = Random::integer(1,1000000000);
    auto b = Random::integer(1,1000000000);
    cout<<a<<" "<<b;
}