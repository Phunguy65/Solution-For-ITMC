#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto x = Random::String(100000,"abcdfghjuytreq");
    cout <<x<<endl;
}