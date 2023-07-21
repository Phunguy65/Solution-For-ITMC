#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto a = Random::integer(1,10000);
    auto b = Random::integer(1,10000);
    cout << a <<" "<<b;
}